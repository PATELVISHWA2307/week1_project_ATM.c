
//*********************DAY - 1************************

#include <stdio.h>

int main() {
    // Task 1
    printf("Name: John Doe\n");
    printf("Age: 20\n");
    printf("City: New York\n");

    // Task 2
    int m1, m2, m3, total;
    printf("Enter marks in 3 subjects: ");
    scanf("%d%d%d", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    printf("Total Marks: %d\n", total);

    return 0;
}