/*
Условие задачи
Написать функцию:
void arrayShiftRight(int array[], int size)
Реализовать циклический сдвиг массива на 1 элемент вправо.
Использование дополнительного массива не разрешается.
*/
#include <stdio.h>

#define SIZE 10

void arrayShiftRight(int array[], int size) {
    int temp = array[size-1];
    
    for ( size -= 1; 0 < size; size-- ) {
        array[size] = array[size-1];
    }
    array[0] = temp;
}

int main() {
    int last = SIZE - 1;
    int array[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    arrayShiftRight(array, SIZE);
    
    printf("\n");
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
    
    return 0;
}
