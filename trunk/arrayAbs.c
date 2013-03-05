/*
Условие задачи
void arrayAbs(int array[], int size)
Заменить каждый элемент массива его абсолютным значением.
*/
#include <stdio.h>

void arrayAbs(int array[], int size) {
    for ( int i = size - 1; i >= 0; i-- ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
}

int main() {
    int data[10] = { 0, -1, 2, -3, 4, -5, 6, -7, 8, -9 };

    for ( int i = 9; i > 0; i-- ) {
        printf("%d ", data[i]);
    }
    printf("%d\n", data[0]);

    arrayAbs(data, 10);

    for ( int i = 9; i > 0; i-- ) {
        printf("%d ", data[i]);
    }
    printf("%d\n", data[0]);

    return 0;
}
