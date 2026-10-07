#include<stdio.h>

int main(){
int choice;

printf("1. tea\n");
printf("2. coffee \n");

printf("enter choice \n");
scanf("%d", &choice);

switch (choice){
case 1:
    printf("you selected tea");
    break;
case 2:
    printf("you selected coffee");
    break;

    default:
        printf("invalid choice");






}

}
