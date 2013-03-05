/*
Условие задачи
В файле task.in дано искомое число needle, а также последовательность чисел размером не более 100 элементов.
Найти needle в массиве и вывести в файл task.out его индекс либо -1, если число не найдено.

Пример ввода
40
10 20 30 40 50 60 70 80 90 100
Пример вывода
3
*/
#include <stdio.h>

int arraySearch(FILE *in, int size, int needle) {
    int array[size];
    
    for ( int loaded = 0; loaded < size && fscanf(in, "%d", &array[loaded]) == 1; loaded++ ) {
        if ( needle == array[loaded] ) {
            return loaded;
        }
    }
    return -1;
}

int main() {
    int needle;
    int size = 100;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d", &needle);
    fprintf(out, "%d\n", arraySearch(in, size, needle));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
