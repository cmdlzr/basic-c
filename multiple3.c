/*
 * Считать с клавиатуры целое положительное число.
 * Вывести в строку все числа, кратные 3, от нуля до указанного числа включительно.
*/
#include <stdio.h>

#define DIVISOR 3

int main() {
    int last;
    
    scanf("%d", &last);
    
    last -= last % DIVISOR;
    
    for ( int i = 0; i < last; i += DIVISOR ) {
        printf("%d ", i);
    }
    printf("%d\n", last);
    
    return 0;
}
