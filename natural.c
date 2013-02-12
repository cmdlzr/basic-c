/*
 * Считать с клавиатуры целое положительное число.
 * Вывести в строку через пробел по порядку все натуральные числа, не превышающие заданное.
*/
#include <stdio.h>

int main() {
    int limit;
    
    scanf("%d", &limit);
    
    for ( int i = 1; i < limit; i++ ) {
        printf("%d ", i);
    }
    printf("%d\n", limit);
    
    return 0;
}
