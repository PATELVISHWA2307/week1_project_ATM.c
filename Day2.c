//*************************DAY - 2*********************

#include <stdio.h>

int main() {
    // Task 1: Rectangle
    float length, breadth, area, perimeter;
    printf("Enter length and breadth: ");
    scanf("%f%f", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area: %.2f, Perimeter: %.2f\n", area, perimeter);

    // Task 2: Celsius to Fahrenheit
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsius * 9 / 5 + 32;
    printf("Fahrenheit: %.2f\n", fahrenheit);

    // Task 3: Even or Odd
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}