/*
Условие задачи
int arrayScan(FILE *in, int array[], int limit)
Считать из файла in не более limit элементов в массив array.
Вернуть количество считанных элементов.
*/
#include <stdio.h>

#define SIZE 10
#define LIMIT 7

int arrayScan(FILE *in, int array[], int limit) {
    int loaded = 0;
    
    for ( ; loaded < limit && fscanf(in, "%d", &array[loaded]) == 1; loaded++ );
    return loaded;
}


int main() {
    int data[SIZE] = {};
    int last = SIZE - 1;
    FILE *in = fopen("task.in", "r");

    printf("Loaded = %d\n", arrayScan(in, data, LIMIT));

    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", data[i]);
    }
    printf("%d\n", data[last]);
    
    fclose(in);

    return 0;
}
