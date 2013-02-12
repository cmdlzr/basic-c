#include <stdio.h>

int main() {
    int upperLimit;
    
    scanf("%d", &upperLimit);
    
    for ( ; upperLimit > 0; upperLimit-- ) {
        printf("%d ", upperLimit);
    }
    printf("0\n");
    
    return 0;
}
