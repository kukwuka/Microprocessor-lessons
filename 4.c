#include <stdio.h>
#include <stdlib.h>
#include "lib.h"


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

    printf(
            "line %d contains %d negative value: \n\r",
            row_number + 1,
            count_negative_in_array(array[row_number], n)
    );
    return 0;
}

