/*
 * Считать с клавиатуры целое положительное число.
 * Вывести в строку все числа, кратные 5, от нуля до указанного числа включительно.
*/
#include <stdio.h>

#define DIVISOR 5

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
