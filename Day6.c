#include <stdio.h>

int main() {
    int num, reverse = 0, count = 0, choice;

    // Task 1: Reverse digits
    printf("Enter a number to reverse: ");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    printf("Reversed: %d\n", reverse);

    // Task 2: Count digits
    temp = num;
    while (temp != 0) {
        count++;
        temp /= 10;
    }
    printf("Number of digits: %d\n", count);

    // Task 3: Repeated menu
    do {
        printf("\n1. Say Hello\n2. Say Bye\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: printf("Hello!\n"); break;
            case 2: printf("Bye!\n"); break;
            case 3: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 3);

    return 0;
}
