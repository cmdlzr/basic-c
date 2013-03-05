/*
Условие задачи
Написать функцию 
void arrayExchange(int array[], int len)

Попарно обменять местами все четные элементы массива с нечетными, начиная с нулевого.
a[0] <-> a[1]    a[2] <-> a[3]   .....
Если последний элемент четный – не менять его.

Запрещено использование дополнительного массива.
*/
#include <stdio.h>

#define SIZE 21

void arrayExchange1(int array[], int len) {
    int last = len - len % 2 - 1;
    
    for ( int i = 0; i < last; i += 2 ) {
        int temp = array[i];
        
        array[i] = array[i+1];
        array[i+1] = temp;
    }
}

void arrayExchange(int array[], int len) {
    for ( int i = 0, last = len - 1; i < last; i += 2 ) {
        int store = array[i];
        
        array[i] = array[i+1];
        array[i+1] = store;
    }
}

int main() {
    int last = SIZE - 1;
    int array[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    
    arrayExchange(array, SIZE);
    
    printf("\n");
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
    
    return 0;
}
