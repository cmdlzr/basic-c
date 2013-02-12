/*
Условие задачи
Вычислить и вывести факториал считанного с клавиатуры целого числа.
В случае неопределенности ответа вывести -1.
Для решения пользоваться циклами.

Пример ввода
5
Пример вывода
120
*/
#include <stdio.h>

int main() {
    int count, factorial;
    
    scanf("%d", &count);
    
    if ( count < 0 || count > 12 ) {
        printf("-1\n");
    } else {
        for ( factorial = 1 ; 1 < count; count-- ) {
            factorial *= count;
        }
        printf("%d\n", factorial);
    }
    return 0;
}
