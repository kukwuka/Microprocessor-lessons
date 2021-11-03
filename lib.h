#include <stdlib.h>

void generate_array_by_client(int ***array, int *n, int *m);

void sort_array(int *array, int size);

void print_array(int ***array, int n, int m);

int count_negative_in_array(int *array, int n);


int **dynamic_array(size_t n, size_t m) {
    int **array = (int **) malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i) {
        array[i] = (int *) malloc(m * sizeof(int *));
    }
    return array;
}


void generate_array_by_client(int ***array, int *n, int *m) {

    printf("Generate and sort row of array with size n*m \n\r");
    printf("Enter n size: \n\r");
    scanf("%d", n);
    printf("Enter m size: \n\r");
    scanf("%d", m);
    *array = dynamic_array(*n, *m);


    for (int i = 0; i < *n; ++i) {
        printf("Enter %d values to row %d \r\n", *m, i + 1);
        for (int j = 0; j < *m; ++j) {
            scanf("%d", &(*array)[i][j]);
        }
    }

    printf("introduced array is : \n\r");
    print_array(array, *n, *m);
}


void sort_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        // сравниваем два соседних элемента.
        for (int j = 0; j < size - i; j++) {
            if (array[j] > array[j + 1]) {
                // если они идут в неправильном порядке, то
                //  меняем их местами.
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

void print_array(int ***array, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d \t", (*array)[i][j]);
        }
        printf("\r\n");
    }
}

int count_negative_in_array(int *array, int n) {
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] < 0) {
            count += 1;
        }
    }
    return count;
}