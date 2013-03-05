#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *array;
    int size;
}List;

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void arrayFill(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] = 25;
    }
}

void init(List *list, int capacity) {
    list->array = malloc(capacity*sizeof(int));
    list->size = capacity;
}

void append(List *list) {
    list->size += 1;
    list->array = realloc(list->array, list->size*sizeof(int));
}

void unset(List *list) {
    list->size -= 1;
    list->array = realloc(list->array, list->size*sizeof(int));
}

void appendFew(List *list, int quantity) {
    list->size += quantity;
    list->array = realloc(list->array, list->size*sizeof(int));
}

void unsetFew(List *list, int quantity) {
    if ( list->size < quantity ) {
        list->size = 0;
    } else {
        list->size -= quantity;
    }
    list->array = realloc(list->array, list->size*sizeof(int));
}

void insert(List *list, int position, int quantity, int value) {
    int limit = position + quantity;

    list->size += quantity;
    list->array = realloc(list->array, list->size*sizeof(int));
    for ( int i = list->size - 1; i > position; i-- ) {
        list->array[i] = list->array[i-quantity];
    }
    for ( int i = position; i < limit; i++ ) {
        list->array[i] = value;
    }
}

void kill(List *list) {
    list->size = 0;
    free(list->array);
}

int main() {
    List list;

    init(&list, 10);
    arrayFill(list.array, list.size);
    arrayPrint(list.array, list.size);
    insert(&list, 4, 5, 42);
    arrayPrint(list.array, list.size);
    appendFew(&list, 5);
    arrayPrint(list.array, list.size);
    insert(&list, 12, 3, 37);
    arrayPrint(list.array, list.size);
    insert(&list, list.size, 1, 56);
    arrayPrint(list.array, list.size);
    unset(&list);
    arrayPrint(list.array, list.size);
    kill(&list);

    return 0;
}

