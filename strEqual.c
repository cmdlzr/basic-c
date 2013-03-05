/*
Условие задачи
int strEqual(char str1[], char str2[])

Выяснить, равны ли строки.
*/
#include <stdio.h>

int strEqual(char str1[], char str2[]) {
    for ( ; *str1 == *str2 && *str1 != '\0'; str1++, str2++ );
    return *str2 == *str1;
}

int main() {
    char str1[2] = "A";
    char str2[2] = "A";
    char str3[1] = "";
//    char str1[29] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    char str2[29] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    char str3[29] = "ABCDEFGHIJKLMNOPQRSTUVWzYZ";
    
    printf("%d\n", strEqual(str1, str2));
    printf("%d\n", strEqual(str1, str3));
    
    return 0;
}
