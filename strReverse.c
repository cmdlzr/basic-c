/*
Условие задачи
В файле task.in дана строка длиной не более 100 символов.
Прочитать строку в память и произвести ее реверс.
Результат вывести в task.out.

Пример ввода
hello
Пример вывода
olleh
*/
#include <stdio.h>

int main() {
    int limit = 100;
    char str[limit];
    int length = 0;
    int temp;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%100s", &str);
    for ( ; str[length] != '\0'; length++ );
    for ( int i = 0, j = length - 1; i < j; i++, j-- ) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    fprintf(out, "%s\n", str);
    
    fclose(in);
    fclose(out);
    
    return 0;
}
