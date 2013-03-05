/*
Условие задачи
int factorial(int n)
Использовать рекурсию.
В случае неопределенности возвращать -1.
*/
#include <stdio.h>

int factorial(int n) {
    if ( 0 > n ) {
        return -1;
    }
    if ( n <= 1 ) {
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    printf("%d\n", factorial(-1));
    printf("%d\n", factorial(0));
    printf("%d\n", factorial(1));
    printf("%d\n", factorial(2));
    printf("%d\n", factorial(3));
    printf("%d\n", factorial(5));
    
    return 0;
}
