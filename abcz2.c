#include <stdio.h>

int main() {
    int a;
    int isZulu = 1;
    
    scanf("%d", &a);
    
    if ( a % 2 == 0 ) {
        printf("alpha\n");
        isZulu = 0;
    }
    if ( a % 3 == 0 ) {
        printf("bravo\n");
        isZulu = 0;
    }
    if ( a % 5 == 0 ) {
        printf("charlie\n");
        isZulu = 0;
    }
    if ( isZulu ) {
        printf("zulu\n");
    }
    
    return 0;
}
