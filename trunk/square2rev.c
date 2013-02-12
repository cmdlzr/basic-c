/*
Условие задачи
Вывести числовой квадрат заданного размера.
Выведенные числа начинаются с единицы и постоянно увеличиваются.
В каждой строке числа разделены пробелами.
Порядок строк обратный.
Размер считать с клавиатуры.

Пример ввода
2
Пример вывода
3 4
1 2
*/
#include <stdio.h>

int main() {
    int size;
    int value;
    
    scanf("%d", &size);
    
    for ( int row = size; row > 0; row-- ) {
        value = size * (row - 1) + 1;
        for ( int column = 1; column < size; column++, value++ ) {
            printf("%d ", value);
        }
        printf("%d\n", value);
    }
    
    return 0;
}
