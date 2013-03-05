int pwr(int number, int power) {
    int result = 1;
    
    for ( int i = 1; i <= power; i++ ) {
        result *= number;
    }
    return result;
}
