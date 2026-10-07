#include<stdio.h>

int main(){
int choice;
printf("which month were you born? \n");
printf("1.  January \n");
printf("2.  February \n");
printf("3.  March \n");
printf("4.  April \n");
printf("5.  May \n");
printf("6.  June \n");
printf("7.  July \n");
printf("8.  August \n");
printf("9.  September \n");
printf("10. October \n");
printf("11. November\n");
printf("12. December \n\n");

printf("enter choice");
scanf("%d", &choice);

switch (choice) {
case 1:
    printf("you were born in January");
    break;
case 2:
    printf("you were born in February");
    break;
case 3:
    printf("you were born in March");
    break;
case 4:
    printf("you were born in april");
    break;
case 5:
    printf("you were born in May");
    break;
case 6:
    printf("you were born in June");
    break;
 case 7:
    printf("you were born in July");
    break;
 case 8:
    printf("you were born in August");
    break;
case 9:
    printf("you were born in September");
    break;
 case 10:
    printf("you were born in October");
    break;
case 11:
    printf("you were born in November");
    break;

 case 12:
    printf("you were born in December");
    break;
 default:
    printf("invalid choice");
}
 return 0;
}
