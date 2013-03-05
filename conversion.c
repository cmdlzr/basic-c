#include <stdio.h>

void conversion(int number10, int base) {
    if ( number10 != 0 ) {
        conversion(number10/base, base);
        printf("%d", number10%base);
    }
}
