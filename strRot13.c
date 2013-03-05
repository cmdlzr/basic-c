/*
Условие задачи
Написать функцию:
void strRot13(char str[])
Зашифровать строку по алгоритму ROT13
*/
#include <stdio.h>

void strRot13_3(char str[]) {
    int flag = 0;
    
    for ( ; *str != '\0'; str++ ) {
        if ( flag == 0 &&  *str > 64 && *str < 78 ) {
            *str += 13;
            flag = 1;
        }
        if ( flag == 0 && *str > 96 && *str < 110 ) {
            *str += 13;
            flag = 1;
        }
        if ( flag == 0 && *str > 77 && *str < 91 ) {
            *str -= 13;
            flag = 1;
        }
        if ( flag == 0 && *str > 109 && *str < 123 ) {
            *str -= 13;
            flag = 1;
        }
        flag = 0;
    }
}

void strRot13_3(char str[]) {
    char key[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    char code[] = { 'N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m' };
    int counter;
    
    for ( ; *str != '\0'; str++ ) {
        for ( counter = 0; *str != key[counter] && counter < 53; counter++ );
        if ( counter < 53 ) {
            *str = code[counter];
        }
    }
}

void strRot13_2(char str[]) {
    char key[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char code[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    int counter;
    
    for ( ; *str != '\0'; str++ ) {
        for ( counter = 0; *str != key[counter] && counter < 53; counter++ );
        if ( counter < 53 ) {
            *str = code[counter];
        }
    }
}

void strRot13(char str[]) {
    for ( ; *str != '\0'; str++ ) {
        if ( ( *str >= 'A' && *str < 'N') || ( *str >= 'a' && *str < 'n') ) {
            *str += 13;   
        } else {
            *str -= 13; 
        }
    }
}

int main() {
    char str[26] = "Hello,~@#$%^&*() World!";
    
    printf("%s\n", str);
    strRot13(str);
    printf("%s\n", str);
    
    return 0;
}
