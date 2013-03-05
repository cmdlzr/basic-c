/*
Условие задачи
Написать функцию:
void sliceShiftRight(int array[], int start, int end)
Осуществить циклический сдвиг части массива на один элемент вправо от start до end включительно.
*/
#include <stdio.h>

#define SIZE 10

void sliceShiftRight(int array[], int start, int end) {
    if ( start < end ) {
        int temp = array[end];
        
        for ( int i = end; start < i; i-- ) {
            array[i] = array[i-1];
        }
        array[start] = temp;
    }
}

int main() {
    int last = SIZE - 1;
    int start = 3, end = 7;
    int array[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    sliceShiftRight(array, start, end);
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
    
    return 0;
}

