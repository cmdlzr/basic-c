/*
Условие задачи
Написать функцию
void arrayCopy(int destination[], int source[], int size)
*/
#include <stdio.h>

#define SIZE 10

void arrayCopy(int destination[], int source[], int size) {
    for ( int i = 0; i < size; i++ ) {
        destination[i] = source[i];
    }
}

int main() {
    int last = SIZE - 1;
    int source[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int destination[SIZE] = { 0 };
    
    arrayCopy(destination, source, SIZE);
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", destination[i]);
    }
    printf("%d\n", destination[last]);
    
    return 0;
}
