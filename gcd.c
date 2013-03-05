/*
Условие задачи
Написать функцию, которая находит наибольший общий делитель.
int gcd(int a, int b)

Передаваемые значения не равны нулю.
*/
#include <stdio.h>

int gcd(int a, int b) {
    for ( int remaider = 1; remaider != 0; a = b, b = remaider ) {
        remaider = a % b;
    }
    return a;
}

int main() {
    printf("%d\n", gcd(105, 35));
    printf("%d\n", gcd(35, 105));
    
    return 0;
}
