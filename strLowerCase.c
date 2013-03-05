#include <stdio.h>

void strLowerCase(char str[]) {
    for ( ; *str != '\0'; str++ ) {
        if ( *str > 64 && *str < 91 ) {
            *str += 32;
        }
    }
}

int main() {
    char testStr[31] = "ABCDEFGHIJKL1234MNOPQRSTUVWXYZ";
    
    strLowerCase(testStr);
    printf("%s\n", testStr);
    
    return 0;
}
