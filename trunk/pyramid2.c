/*
Условие задачи
Вывести числовую пирамидку на total строк.
В первой строке стоит число 1. В последующих строках стоят увеличивающиеся числа через пробел.

Пример ввода
3
Пример вывода
1
2 3
4 5 6
*/
#include <stdio.h>

int main() {
    int size;
    int value = 1;
    
    scanf("%d", &size);
    
    for ( int row = 1; row <= size; row++, value++ ) {
        for ( int column = 1; column < row; column++, value++ ) {
            printf("%d ", value);
        }
        printf("%d\n", value);
    }
    
    return 0;
}
