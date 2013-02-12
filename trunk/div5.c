/*
Условие задачи
Считать min, max. Вывести в столбик кратные тройке числа от min до max включительно.

Пример ввода
0 9
Пример вывода
0
3
6
9
*/ 
#include <stdio.h>

#define DIVISOR 5

int main() {
    int min, max;
    int remainder;
    
    scanf("%d %d", &min, &max);
    
    remainder = min % DIVISOR;
    if ( remainder > 0 ) {
        min += DIVISOR;
    }
    min -= remainder;
    for ( int i = min; i <= max; i += DIVISOR ) {
        printf("%d\n", i);
    }
    
    return 0;
}
