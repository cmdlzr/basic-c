/*
Условие задачи
Считать два числа из файла task.in.
Записать их сумму в файл task.out.

Пример ввода
10 20
Пример вывода
30
*/
#include <stdio.h>

int main() {
    int x, y;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d%d", &x, &y);
    fprintf(out, "%d\n", x+y);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
