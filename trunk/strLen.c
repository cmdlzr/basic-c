/*
Условие задачи
int strLen(char str[])

Подсчитать длину заданной строки.
*/
#include <stdio.h>

int strLen(char str[]) {
    int length = 0;
    
    for ( ; str[length] != '\0'; length++ );
    return length;
}

int main() {
    char str[13] = "Hello World!";
    
    printf("%s\n", str);
    printf("%d\n", strLen(str));
    
    return 0;
}

