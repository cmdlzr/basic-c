/*
Условие задачи
Написать функцию, возвращающую индекс искомого числа в массиве
либо -1 в случае, если число в массиве не содержится.
int arraySearch(int array[], int size, int needle)
*/
#include <stdio.h>

#define SIZE 10

int arraySearch(int array[], int size, int needle) {
    for ( size -= 1; 0 <= size; size-- ) {
        if ( needle == array[size] ) {
            return size;
        }
    }
    return -1;
}

int main() {
    int array[SIZE] = { 10, 99, 3, 22, 101, 6, 7, 8, -91, 5 };
    
    printf("%d\n", arraySearch(array, SIZE, 102));
    
    return 0;
}
