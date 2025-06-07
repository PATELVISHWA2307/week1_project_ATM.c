#include <stdio.h>

int main() {
    int a, b, c, year;

    // Task 1: Positive, Negative or Zero
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0)
        printf("Positive\n");
    else if (a < 0)
        printf("Negative\n");
    else
        printf("Zero\n");

    // Task 2: Largest of 3
    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("Largest: %d\n", a);
    else if (b >= a && b >= c)
        printf("Largest: %d\n", b);
    else
        printf("Largest: %d\n", c);

    // Task 3: Leap Year
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");

    return 0;
}
