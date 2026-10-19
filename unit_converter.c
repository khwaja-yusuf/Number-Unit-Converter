#include <stdio.h>

int main() {

    int choice;
    float value, result;

    printf("===== UNIT CONVERTER =====\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter Celsius: ");
            scanf("%f", &value);

            result = (value * 9 / 5) + 32;

            printf("Fahrenheit = %.2f\n", result);
            break;

        case 2:
            printf("Enter Fahrenheit: ");
            scanf("%f", &value);

            result = (value - 32) * 5 / 9;

            printf("Celsius = %.2f\n", result);
            break;

        case 3:
            printf("Enter Kilometres: ");
            scanf("%f", &value);

            result = value * 0.621371;

            printf("Miles = %.2f\n", result);
            break;

        case 4:
            printf("Enter Miles: ");
            scanf("%f", &value);

            result = value * 1.60934;

            printf("Kilometres = %.2f\n", result);
            break;

        case 5:
            printf("Enter Metres: ");
            scanf("%f", &value);

            result = value / 1000;

            printf("Kilometres = %.2f\n", result);
            break;

        case 6:
            printf("Enter Kilometres: ");
            scanf("%f", &value);

            result = value * 1000;

            printf("Metres = %.2f\n", result);
            break;

        case 7:
            printf("Enter Kilograms: ");
            scanf("%f", &value);

            result = value * 1000;

            printf("Grams = %.2f\n", result);
            break;

        case 8:
            printf("Enter Grams: ");
            scanf("%f", &value);

            result = value / 1000;

            printf("Kilograms = %.2f\n", result);
            break;

        case 9:
            printf("Program ended.\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
