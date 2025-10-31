/*
Name: Evanson Nduati
reg no: CT101/G/26516/25
*/
#include <stdio.h>

int main() {
    int choice;

    printf("100MB @ 50 KES \n");
    printf("500MB @ 200 KES \n");
    printf("1GB   @ 350 KES \n");
    printf("2GB   @ 600 KES \n");

    printf("Enter your choice (1-4) \n: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("You took 100MB. Cost = 50 \n");
    }
    else if (choice == 2) {
        printf("You took 500MB. Cost = 200 \n");
    }
    else if (choice == 3) {
        printf("You took 1GB. Cost = 350 \n");
    }
    else if (choice == 4) {
        printf("You took 2GB. Cost = 600 \n");
    }
    
    

    return 0;
}