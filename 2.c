#include <stdio.h>

float fahrenheitToKelvin(float value);

float kelvinToFahrenheit(float value);

int main() {
    int option;
    float value = 4;
    while (1) {
        printf("Choose option \n\r");
        printf("1) from F to K \n\r");
        printf("2) from K to F \n\r");
        printf("3) exit \n\r");

        scanf("%d", &option);
        if (option == 1) {
            printf("Enter value in F \n\r");
            scanf("%f", &value);
            printf("%f F is %f K \n\r", value, fahrenheitToKelvin(value));
        } else if (option == 2) {
            printf("Enter value in K \n\r");
            scanf("%f", &value);
            printf("%f K is %f F \n\r", value, kelvinToFahrenheit(value));
        } else if (option == 3) {
            printf("Stop program");
            return 0;
        } else {
            printf("Choose option: 1, 2, 3");
        }
    }
}


float fahrenheitToKelvin(float value) {
    return (value - (float) 32) * ((float) 5 / (float) 9) + (float) 273.15;
}

float kelvinToFahrenheit(float value) {
    return (value - (float) 273.15) * ((float) 9 / (float) 5) + (float) 32;
}