/*
Условие задачи
Считать из task.in два числа.
Записать в task.out результат выполнения различных побитовых операций.

Пример ввода
1 1
Пример вывода
1&1=1
1|1=1
1^1=0
1<<1=2
1>>1=0
*/
#include <stdio.h>

int main() {
    int x, y;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%d%d", &x, &y);
    
    fprintf(out, "%d&%d=%d\n", x, y, x&y);
    fprintf(out, "%d|%d=%d\n", x, y, x|y);
    fprintf(out, "%d^%d=%d\n", x, y, x^y);
    fprintf(out, "%d<<%d=%d\n", x, y, x<<y);
    fprintf(out, "%d>>%d=%d\n", x, y, x>>y);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
