/*
Условие задачи
int fibonacci(int n)
Использовать рекурсию.
*/
#include <stdio.h>

int fibonacci(int n) {
    if ( n == 0 ) {
        return 0;
    }
    if ( n == 1 || n == -1 ) {
        return 1;
    }
    if ( n < -1 ) { 
        n *= -1;
        if ( n % 2 == 0 ) {
            return -1 * fibonacci(n);
        }
        return fibonacci(n);
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    for ( int n = -8; n < 9; n++) {
        printf("%d\n", fibonacci(n));
    }
    
    return 0;
}
