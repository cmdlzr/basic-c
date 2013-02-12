/*
Условие задачи
Считать с клавиатуры три целых числа - первый член,
шаг и количество членов арифметической прогрессии.
Вывести в строку через пробел члены заданной прогрессии.
Задаваемое количество больше нуля.

Пример ввода
12 2 4
Пример вывода
12 14 16 18
*/
#include <stdio.h>

int main() {
    int member, step, quantity;
    
    scanf("%d %d %d", &member, &step, &quantity);
    
    for ( ; 1 < quantity; quantity-- ) {
        printf("%d ", member);
        member += step;
    }
    printf("%d\n", member);
    
    return 0;
}
