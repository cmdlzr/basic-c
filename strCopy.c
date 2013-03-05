/*
Условие задачи
void strCopy(char target[], char source[])

Гарантируется, что строка target не короче строки source.
*/
#include <stdio.h>

void strCopy(char target[], char source[]) {
    for ( ; *source != '\0'; target++, source++ ) {
        *target = *source;
    }
    *target = *source;
}

int main() {
    char str2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str1[26] = "";
    
    printf("%s\n", str1);
    strCopy(str1, str2);
    printf("%s\n", str2);
    
    return 0;
}
