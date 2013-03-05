/*
Условие задачи
Считать с клавиатуры целые числа min, max, m, n, причём m и n положительные.
Вывести на экран в столбик целые числа от min до max включительно, которые
без остатка делятся как на m, так и на n.
В указанном промежутке гарантируется хотя бы одно число, подлежащее выводу.

Пример ввода
0 12 2 3
Пример вывода
0
6
12
*/ 
#include <stdio.h>

int gcd(int a, int b) {
    for ( int remaider = 1; remaider != 0; a = b, b = remaider ) {
        remaider = a % b;
    }
    return a;
}

int lcm(int a, int b) {
    return ((a / gcd(a, b)) * (b / gcd(a, b)) * gcd(a, b));
}

int main() {
    int min, max, m, n;
    int lcmVal;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    
    lcmVal = lcm(m, n);
    if ( min % lcmVal > 0 ) {
        min += lcmVal;
    }
    min -= min % lcmVal;
    
    for ( int i = min; i <= max; i += lcmVal ) {
        printf("%d\n", i);
    }
    
    return 0;
}
