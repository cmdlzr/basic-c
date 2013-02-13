/*
Условие задачи
Вывести в консоль числовую пирамидку на total строк.
В каждой строке числа идут от единицы до номера строки через пробел.
Пропустить rows строк и cols столбцов.
В выводе не должно быть пустых строк до и после чисел.
Целые положительные числа total, rows и cols считать с клавиатуры.

Пример ввода
5 3 2
Пример вывода
3 4
3 4 5
*/
#include <stdio.h>

int main() {
    int total, rows, cols;
    
    scanf("%d %d %d", &total, &rows, &cols);
    
    if ( cols > rows ) {
        rows = cols;
    }
    for ( int row = rows + 1; row <= total; row++ ) {
        for ( int column = cols + 1; column < row; column++ ) {
            printf("%d ", column);
        }
        printf("%d\n", row);
    }
    
    return 0;
}
