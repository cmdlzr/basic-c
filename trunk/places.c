/*
Условие задачи
Считать с клавиатуры целое число.
Вывести на экран количество знакомест,
нужных для вывода этого числа.

Пример ввода
123
Пример вывода
3
*/
#include <stdio.h>

int main() {
    int input;
    int quantity = 1;
    
    scanf("%d", &input);
    
    if ( input < 0 ) {
        input *= -1;
        quantity += 1;
    }
    
    for ( ; input > 9; input /= 10 ) {
        quantity += 1;
    }
    
    printf("%d\n", quantity);
    
    return 0;
}
