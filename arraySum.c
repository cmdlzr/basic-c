/*
Условие задачи
Написать функцию:
int arraySum(int array[], int size)
Вернуть сумму элементов массива.
size > 0
*/
#include <stdio.h>

#define SIZE 10

int arraySum(int array[], int size) {
    int sum = array[size-1];
    
    for ( size -= 2; 0 <= size; size-- ) {
        sum += array[size];
    }
    return sum;
}

int main() {
    int array[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    printf("%d\n", arraySum(array, SIZE));
    
    return 0;
}
