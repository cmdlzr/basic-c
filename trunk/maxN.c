/*
Условие задачи
Считать с клавиатуры целое положительное число - количество чисел в последовательности.
Затем считать с клавиатуры заданное количество чисел и вывести наибольшее из них.

Пример ввода
5
1 2 3 4 5
Пример вывода
5
*/
#include <stdio.h>

int main() {
    int count, current, max;
    
    scanf("%d %d", &count, &max);
    
    for ( count = count - 1; 0 < count; count-- ) {
        scanf("%d", &current);
        if ( max < current ) {
            max = current;
        } 
    }
    printf("%d\n", max);
    
    return 0;
}
