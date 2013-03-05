/*
Условие задачи
int intScan(FILE *in)
Считать число из файла и вернуть его.
*/
int intScan(FILE *in) {
    int value;

    fscanf(in, "%d", &value);
    return value;
}
