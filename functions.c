void conversion(int number10, int base) {
    if ( number10 != 0 ) {
        conversion(number10/base, base);
        printf("%d", number10%base);
    }
}

int pwr(int number, int power) {
    int result = 1;
    
    for ( int i = 1; i <= power; i++ ) {
        result *= number;
    }
    return result;
}
