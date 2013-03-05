/*
Условие задачи
В файле task.in даны два целых положительных числа.
Записать в файл task.out наименьшее общее кратное этих чисел.
Пример ввода
3 5
Пример вывода
15
*/
#include <stdio.h>

int gcd(int a, int b) {
    for ( int remaider = 1; remaider != 0; a = b, b = remaider ) {
        remaider = a % b;
    }
    return a;
}

int main() {
    int a, b, c;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d%d", &a, &b);
    
    c = a / gcd(a, b) * b;
    fprintf(out, "%d\n", c);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
