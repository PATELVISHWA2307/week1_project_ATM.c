#include <stdio.h>

int main() {
    int i, n, sum = 0;

    // Task 1: Multiplication Table
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n*i);

    // Task 2: Sum of N Natural Numbers
    printf("Enter N: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum += i;
    printf("Sum: %d\n", sum);

    // Task 3: Even numbers from 1 to 100
    for (i = 2; i <= 100; i += 2)
        printf("%d ", i);
    printf("\n");

    return 0;
}
