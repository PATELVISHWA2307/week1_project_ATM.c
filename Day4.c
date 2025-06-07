#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
            result = a * b;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%f%f", &a, &b);
            if (b != 0)
                result = a / b;
            else
                printf("Division by zero error!\n");
            printf("Result: %.2f\n", result);
            break;
        case 5:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
