/*
Условие задачи
Написать функцию:
void arrayReverse(int array[], int size)

Использование дополнительного массива не разрешается.
*/
#include <stdio.h>

#define SIZE 10

void arrayReverse(int array[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        int temp = array[i];
        
        array[i] = array[j];
        array[j] = temp;
    }
}

int main() {
    int last = SIZE - 1;
    int array[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    arrayReverse(array, SIZE);
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
    
    return 0;
}
