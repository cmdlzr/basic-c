/*
Условие задачи
Считать с клавиатуры целое неотрицательное число в десятичной системе счисления
и основание новой системы счисления (целое число от 2 до 10).
Вывести в консоль число, записанное в новой системе счисления.
Задача решается без массивов.

Пример ввода
8 3
Пример вывода
22
*/
#include <stdio.h>

void conversion(int number10, int base) {
    if ( number10 != 0 ) {
        conversion(number10/base, base);
        printf("%d", number10%base);
    }
}

int main() {
    int number10, base;
    
    scanf("%d %d", &number10, &base);
    
    if ( number10 == 0 ) {
        printf("0\n");
    } else {
        conversion(number10, base);
        printf("\n");
    }
    
    return 0;
}
