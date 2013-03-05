/*
Условие задачи
Написать функцию:
void sliceReverse(int array[], int lo, int hi)
Осуществить реверс части массива от lo до hi включительно.
*/
#include <stdio.h>

#define SIZE 10

void sliceReverse(int array[], int lo, int hi) {
    for ( ; lo < hi; lo++, hi-- ) {
        int temp = array[lo];
        
        array[lo] = array[hi];
        array[hi] = temp;
    }
}

int main() {
    int last = SIZE - 1;
    int lo = 3, hi = 7;
    int array[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    sliceReverse(array, lo, hi);
    
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
    
    return 0;
}
