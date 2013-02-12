/*
 * Считать с клавиатуры два целых числа - делимое и делитель, причем делитель не равен нулю.
 * Вывести на экран наименьшее число, кратное делителю, не меньшее делимого.
*/
#include <stdio.h>

int nextMult(int dividend, int divisor) {
    int remainder;
    
    if ( divisor < 0 ) {
        divisor *= -1;
    }
    remainder = dividend % divisor;
    if ( remainder > 0 ) {
        dividend += divisor;
    }
    
    return dividend-remainder;
}

int main() {
    printf(" 1 %3d %3d -> %d\n",  15,   6, nextMult(15,   6));
    printf(" 2 %3d %3d -> %d\n",  15,  -6, nextMult(15,  -6));
    printf(" 3 %3d %3d -> %d\n", -15,   6, nextMult(-15,  6));
    printf(" 4 %3d %3d -> %d\n", -15,  -6, nextMult(-15, -6));
    printf(" 5 %3d %3d -> %d\n",   0,   7, nextMult(0,    7));
    printf(" 6 %3d %3d -> %d\n",   0,  -7, nextMult(0,   -7));
    printf(" 7 %3d %3d -> %d\n",  16,   4, nextMult(16,   4));
    printf(" 8 %3d %3d -> %d\n",  16,  -4, nextMult(16,  -4));
    printf(" 9 %3d %3d -> %d\n", -16,   4, nextMult(-16,  4));
    printf("10 %3d %3d -> %d\n", -16,  -4, nextMult(-16, -4));
    printf("11 %3d %3d -> %d\n",   7,  17, nextMult(7,   17));
    printf("12 %3d %3d -> %d\n",   7, -17, nextMult(7,  -17));
    printf("13 %3d %3d -> %d\n",  -7,  17, nextMult(-7,  17));
    printf("14 %3d %3d -> %d\n",  -7, -17, nextMult(-7, -17));
    
    return 0;
}
