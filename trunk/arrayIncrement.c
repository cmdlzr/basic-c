/*
Условие задачи
void arrayIncrement(int array[], int size, int increment)
Увеличить каждый элемент массива на значение increment.
*/
#include <stdio.h>

#define SIZE 10

void arrayIncrement(int array[], int size, int increment) {
    for ( int i = 0; i < size; i++ ) {
        array[i] += increment;
    }
}

int main() {
    int data[SIZE] = {};
    int last = SIZE - 1;

    arrayIncrement(data, SIZE, 1);
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", data[i]);
    }
    printf("%d\n", data[last]);
    
    return 0;
}
