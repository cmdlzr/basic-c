/*
Условие задачи
Написать функцию:
void arrayPrintReversed(int array[], int size)
Распечатать массив на экран в строку через пробел в обратном порядке.
*/
#include <stdio.h>

void arrayPrintReversed(int array[], int size) {
    for ( int i = size - 1; i > 0; i-- ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[0]);
}

int main() {
    int data[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    arrayPrintReversed(data, 10);

    return 0;
}
