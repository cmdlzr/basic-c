/*
Условие задачи
Написать функцию:
int arrayMin(int array[], int size)
Вернуть значение минимального элемента в массиве.
*/
#include <stdio.h>

#define SIZE 10

int arrayMin(int array[], int size) {
    int min = array[0];
    
    for ( size -= 1; 0 < size; size-- ) {
        if ( min > array[size] ) {
            min = array[size];
        }
    }
    return min;
}

int main() {
    int array[SIZE] = { 10, 99, 3, 22, 101, 6, 7, 8, -91, 5 };
    
    printf("%d\n", 3  % 2);
    printf("%d\n", arrayMin(array, SIZE));
    
    return 0;
}
