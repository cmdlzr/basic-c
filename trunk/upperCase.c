/*
Условие задачи
В файле task.in дана последовательность символов.
Перевести все буквы в верхний регистр и вывести
результирующую последовательность в файл task.out

Пример ввода
abcd
Пример вывода
ABCD
*/
#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( char letter; fscanf(in, "%c", &letter) != EOF; ) {
        if ( letter > 96 && letter < 123 ) {
            letter -= 32;
        }
        fprintf(out, "%c", letter);
    }
    fprintf(out, "\n");
    
    fclose(in);
    fclose(out);
    
    return 0;
}
