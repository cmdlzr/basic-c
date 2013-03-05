/*
Условие задачи
void pointerIncrement(int *value)

Увеличить на единицу значение по переданному адресу value.
*/
#include <stdio.h>

void pointerIncrement(int *value) {
	*value += 1;
}

int main() {
    int *variable;
    *variable = 41;
    
    pointerIncrement(variable);
    printf("%d\n", *variable);
    
    return 0;
}
