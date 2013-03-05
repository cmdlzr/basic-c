/*
Условие задачи
void strUpperCase(char str[])
*/
#include <stdio.h>

void strUpperCase(char str[]) {
    for ( ; *str != '\0'; str++ ) {
        if ( *str > 96 && *str < 123 ) {
            *str -= 32;
        }
    }
}

int main() {
    char testStr[31] = "abcdefghijkl1234mnopqrstuvwxyz";
    
    strUpperCase(testStr);
    printf("%s\n", testStr);
    
    return 0;
}
