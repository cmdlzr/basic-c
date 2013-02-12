/*
Условие задачи
Считать с клавиатуры целое неотрицательное число.
Вывести через пробел степени числа 2 от нулевой до заданной. Использовать цикл.

Пример ввода
3
Пример вывода
1 2 4 8
*/ 
#include <stdio.h>

int main() {
    int limit, result;
    
    scanf("%d", &limit);
    
    result = 1;
    printf("%d", result);
    for ( int i = 1; i <= limit; i++ ) {
        result *= 2;
        printf(" %d", result);
    }
    printf("\n");
    
    return 0;
}
