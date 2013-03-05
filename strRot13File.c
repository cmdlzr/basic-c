/*
Условие задачи
Считать из файла task.in в память строку длиной не более 100 символов.
Зашифровать её по алгоритму ROT13.
Результат вывести в task.out.

Пример ввода
balk
Пример вывода
onyx
*/
#include <stdio.h>

void strRot13(char str[]) {
    for ( ; *str != '\0'; str++ ) {
        if ( *str >= 'A' && *str <= 'z' ) {
            if ( *str > 'm' ) {
                *str -= 13;
            } else if ( *str < 'N' ) {
                *str += 13;
            } else if ( *str <= 'Z' ) {
                *str -= 13;
            } else if ( *str >= 'a' ) {
                *str += 13;
            }
        }
    }
}

int main() {
    int limit = 100;
    char str[limit];
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    fscanf(in, "%100s", str);
    strRot13(str);
    fprintf(out, "%s\n", str);
	
	close(in);
    close(out);
	
    return 0;
}
