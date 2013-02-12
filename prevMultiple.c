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

int main() {
    int dividend, divisor;
    int remainder;
    
    scanf("%d %d", &dividend, &divisor);
    
    if ( divisor < 0 ) {
        divisor *= -1;
    }
    remainder = dividend % divisor;
    if ( remainder < 0 ) {
        dividend -= divisor;
    }
    printf("%d\n", dividend-remainder);
    
    return 0;
}
