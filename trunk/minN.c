/*
Условие задачи
Считать с клавиатуры целое положительное число - количество чисел в последовательности.
Затем считать с клавиатуры заданное количество чисел и вывести наименьшее из них.
Данная задача решается без массивов.

Пример ввода
5
1 2 3 4 5
Пример вывода
1
*/
#include <stdio.h>

int main() {
    int count, current, min;
    
    scanf("%d %d", &count, &min);
    
    for ( count = count - 1; 0 < count; count-- ) {
        scanf("%d", &current);
        if ( min > current ) {
            min = current;
        }
    }
    printf("%d\n", min);
    
    return 0;
}
