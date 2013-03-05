/*
Условие задачи
Считать из файла task.in последовательность чисел размером не более 100 элементов.
Посчитать длину последовательности и вывести ее в task.out.

Пример ввода
10 20 30 40 50 60 70 80 90 100
Пример вывода
10
*/
#include <stdio.h>

int main() {
    int counter = 0;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( int value; fscanf(in, "%d", &value) == 1 && counter < 100; counter++ );
        
    fprintf(out, "%d\n", counter);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
