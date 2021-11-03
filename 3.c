#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main() {
    int *array;
    array = (int *) malloc(SIZE * sizeof(int *));

    printf("Write 8 numbers \n\r");

    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &array[i]);
    }

    printf("\n\r result is : \n\r");
    for (int i = 0; i < SIZE; ++i) {
        printf("%d \t", array[i]);
    }

    return 0;
}
