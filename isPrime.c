/*
Написать функцию:
int isPrime(int n)
Проверить, является ли данное число простым.
*/
#include <stdio.h>

int isPrime(int n) {
    int i = 2;
    
    if ( n < 2 ) {
        return 0;
    }
    for ( ; n % i != 0; i++ );
    if ( i < n ) {
        return 0;
    }
    
    return 1;
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    printf("%d\n", isPrime2(n));
    
    return 0;
}
