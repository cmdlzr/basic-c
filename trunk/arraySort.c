/*
Условие задачи
Написать функцию:
void arraySort(int array[], int size)
Отсортировать элементы в порядке неубывания.
Настоятельно рекомендуется разработать алгоритм самостоятельно, без помощи гугла.
*/
#include <stdio.h>

#define SIZE 20

void arraySort(int array[], int size) {
    int last = size - 1;
    int temp;
    
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < last - i; j++ ) {
            if ( array[j] > array[j+1] ) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main() {
    int last = SIZE - 1;
    int array[SIZE] = { 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
    
    arraySort(array, SIZE);
    
    printf("\n");
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
    
    return 0;
}
