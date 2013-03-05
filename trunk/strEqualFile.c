/*
Условие задачи
В файле task.in заданы две строки длиной не более 100 символов каждая.
Если строки равны, вывести в task.out слово "yes" - иначе вывести "no".

Пример ввода
hello
hello
Пример вывода
yes
*/
#include <stdio.h>

void strEqual(FILE *out, char str1[], char str2[]) {
    for ( ; *str1 == *str2 && *str1 != '\0'; str1++, str2++ );
    if ( *str2 == *str1 ) {
        fprintf(out, "%s\n", "yes");
    } else {
        fprintf(out, "%s\n", "no");
    }
}

int main() {
    int limit = 100;
    char str1[limit];
    char str2[limit];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%100s%100s", str1, str2);
    
    strEqual(out, str1, str2);
	
    fclose(in);
    fclose(out);
    
    return 0;
}
