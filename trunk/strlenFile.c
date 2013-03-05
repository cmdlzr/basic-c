/*
Условие задачи
В файле task.in дана строка длиной не более 100 символов.
Прочитать строку в память и подсчитать ее длину.
Результат вывести в task.out.

Пример ввода
hello
Пример вывода
5
*/
#include <stdio.h>

int strLen(char str[]) {
    int length = 0;
    
    for ( ; str[length] != '\0'; length++ );
    return length;
}

int main() {
    int limit = 100;
    char str[limit];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%100s", &str);
    
    fprintf(out, "%d\n", strLen(str));
    
    fclose(in);
    fclose(out);
    
    return 0;
}
