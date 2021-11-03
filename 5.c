#include <stdio.h>
#include "lib.h"


void sort_array(int *array, int size);

int main() {
    int m;
    int n;
    int **array;
    int row_number;
    generate_array_by_client(&array, &n, &m);

    printf("Enter index of sorting row (index start on 1) : \n\r");
    scanf("%d", &row_number);
    row_number -= 1;
    if (row_number >= n || row_number < 0) {
        printf("Error:Index out of array");
        return 0;
    }

    sort_array(array[row_number], n);
    printf("sorted array is : \n\r");
    print_array(&array, n, m);
    return 0;
}


