#include <stdio.h>

int main() {
    int days;

    while (1) {
        printf("Write days count \n\r");
        scanf("%d", &days);;

        if (days < 1) {
            printf("Stop program");
            break;
        }
        printf("Weeks count: %d ,Days Count: %d \n\r", days / 7, days % 7);
    }
    return 0;
}
