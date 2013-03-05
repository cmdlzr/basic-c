/*
Условие задачи
Написать функцию:
int arrayMax(int array[], int size)
Вернуть значение максимального элемента в массиве.
*/
#include <stdio.h>

#define SIZE 10

int arrayMax(int array[], int size) {
    int max = array[size-1];
    
    for ( size -= 2; 0 <= size; size-- ) {
        if ( max < array[size] ) {
            max = array[size];
        }
    }
    return max;
}

int main() {
    int array[SIZE] = { 1, 2, 3, 4, 10, 6, 7, 8, 9, 5 };
    
    printf("%d\n", arrayMax(array, SIZE));
    
    return 0;
}
