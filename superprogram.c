#include <stdio.h>
#include "lib.h"

int main() {
    int number10, base;
    
    scanf("%d %d", &number10, &base);
    
    if ( number10 == 0 ) {
        printf("0\n");
    } else {
        conversion(number10, base);
        printf("\n");
    }
    printf("%d\n", pwr(10,3));
    
    return 0;
}
