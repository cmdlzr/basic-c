/*
Условие задачи
void arrayPrint(FILE *out, int array[], int size)
Функция должна вывести элементы массива через пробел, завершив вывод символом перевода строки.
*/
#include <stdio.h>

#define SIZE 10

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    int data[SIZE];
    int last = SIZE - 1;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( int i = 0; i < SIZE; i++ ) {
        int value;
        
        fscanf(in, "%d", &value);
        data[i] = value;
    }
    
    arrayPrint(out, data, SIZE);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
