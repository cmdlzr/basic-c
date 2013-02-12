#include <stdio.h>

int main() {
    int total;
    
    scanf("%d", &total);
    
    for ( int row = 1; row <= total; row++ ) {
        for ( int column = 1; column < total; column++ ) {
            printf("%d ", column);
        }
        printf("%d\n", total);
    }
    
    return 0;
}
