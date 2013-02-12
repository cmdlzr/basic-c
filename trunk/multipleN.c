/*
Считать с клавиатуры целое неотрицательное число-максимум.
Считать с клавиатуры целый, не равный нулю делитель.
Вывести в строку числа от нуля до указанного максимума включительно, кратные заданному делителю.
*/
#include <stdio.h>

int main() {
    int max, divisor;
    
    scanf("%d %d", &max, &divisor);
    
    if ( divisor < 0 ) {
        divisor *= -1;
    }
    max -= max % divisor;
    
    for ( int i = 0; i < max; i += divisor ) {
        printf("%d ", i);
    }
    printf("%d\n", max);
    
    return 0;
}
