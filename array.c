/*
Условие задачи
Считать массив длиной 10 из файла task.in.
Записать его через пробел в файл task.out.

Пример ввода
10 20 30 40 50 60 70 80 90 100
Пример вывода
10 20 30 40 50 60 70 80 90 100
*/
#include <stdio.h>

#define SIZE 10

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
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", data[i]);
    }
    fprintf(out, "%d\n", data[last]);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
