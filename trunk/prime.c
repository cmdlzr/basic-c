/*
Условие задачи
Вывести N-ное по счёту простое число (см. Википедию
http://en.wikipedia.org/wiki/Prime_number).
N считать с клавиатуры.
Оптимизировать работу программы, насколько это возможно.
В случае неопределенности ответа вывести -1.

Пример ввода
3
Пример вывода
5

2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107,
109, 113, 127, 131, 137, 139, 149, 151, 157, 163, ...
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
    int nValue = 2;
    int count = 1;
    
    scanf("%d", &n);
    
    if ( n < 1 ) {
        printf("-1\n");
        return 0;
    }

    for ( int i = 3; count < n; i++ ) {
        if ( isPrime(i) == 1 ) {
            count += 1;
            nValue = i;
        }
    }

    printf("%d\n", nValue);
    
    return 0;
}
