
#include <stdio.h>

int main() {
    int choice;

    printf("=== Space Explorer ===\n");
    printf("1. Moon\n");
    printf("2. Mars\n");
    printf("3. Saturn\n");
    printf("Choose a destination: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You are heading to the Moon!\n");
    }
    else if (choice == 2) {
        printf("You are heading to Mars!\n");
    }
    else if (choice == 3) {
        printf("You are heading to Saturn!\n");
    }
    else {
        printf("Unknown destination.\n");
    }

    return 0;
}
