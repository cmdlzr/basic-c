/*
    Условие задачи
    Считать с клавиатуры два целых числа - делимое и делитель, причем делитель не равен нулю.
    Вывести на экран наибольшее число, кратное делителю, не превышающее делимое.

    Пример ввода
    15 6

    Пример вывода
    12
    
 Correct results:
 1  15   6 -> 12
 2  15  -6 -> 12
 3 -15   6 -> -18
 4 -15  -6 -> -18
 5   0   7 -> 0
 6   0  -7 -> 0
 7  16   4 -> 16
 8  16  -4 -> 16
 9 -16   4 -> -16
10 -16  -4 -> -16
11   7  17 -> 0
12   7 -17 -> 0
13  -7  17 -> -17
14  -7 -17 -> -17
*/
#include <stdio.h>

int prevMult(int dividend, int divisor) {
    int remainder;
    
    if ( divisor < 0 ) {
        divisor *= -1;
    }
    remainder = dividend % divisor;
    if ( remainder < 0 ) {
        dividend -= divisor;
    }
    
    return dividend-remainder;
}

int main() {
    printf(" 1 %3d %3d -> %d\n",  15,   6, prevMult(15,   6));
    printf(" 2 %3d %3d -> %d\n",  15,  -6, prevMult(15,  -6));
    printf(" 3 %3d %3d -> %d\n", -15,   6, prevMult(-15,  6));
    printf(" 4 %3d %3d -> %d\n", -15,  -6, prevMult(-15, -6));
    printf(" 5 %3d %3d -> %d\n",   0,   7, prevMult(0,    7));
    printf(" 6 %3d %3d -> %d\n",   0,  -7, prevMult(0,   -7));
    printf(" 7 %3d %3d -> %d\n",  16,   4, prevMult(16,   4));
    printf(" 8 %3d %3d -> %d\n",  16,  -4, prevMult(16,  -4));
    printf(" 9 %3d %3d -> %d\n", -16,   4, prevMult(-16,  4));
    printf("10 %3d %3d -> %d\n", -16,  -4, prevMult(-16, -4));
    printf("11 %3d %3d -> %d\n",   7,  17, prevMult(7,   17));
    printf("12 %3d %3d -> %d\n",   7, -17, prevMult(7,  -17));
    printf("13 %3d %3d -> %d\n",  -7,  17, prevMult(-7,  17));
    printf("14 %3d %3d -> %d\n",  -7, -17, prevMult(-7, -17));
    
    return 0;
}
