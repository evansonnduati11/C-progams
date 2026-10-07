#include <stdio.h>

int main() {

    int choice;

    printf("1. Monday\n");
    printf("2. Tuesday\n");
    printf("3. Wednesday\n");
    printf("4. Thursday\n\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("You selected Monday");
            break;

        case 2:
            printf("You selected Tuesday");
            break;

        case 3:
            printf("You selected Wednesday");
            break;

        case 4:
            printf("You selected Thursday");
            break;

        default:
            printf("Unavailable");
            break;
    }

    return 0;
}
