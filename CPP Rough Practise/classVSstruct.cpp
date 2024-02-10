#include <stdio.h>

int main() {
    int choice;

    do {
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Option 3\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("You selected Option 1.\n");
                break;
            case 2:
                printf("You selected Option 2.\n");
                break;
            case 3:
                printf("You selected Option 3.\n");
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    } while(choice != 4);

    return 0;
}