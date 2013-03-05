/*
Условие задачи
Написать функцию:
void arrayZeroFill(int array[], int size)
Заполнить массив нулями.
*/
#include <stdio.h>

#define SIZE 10

void arrayZeroFill(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 0;
    }
}

int main() {
    int data[SIZE];
    int last = SIZE - 1;

    arrayZeroFill(data, SIZE);
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", data[i]);
    }
    printf("%d\n", data[last]);
    
    return 0;
}
