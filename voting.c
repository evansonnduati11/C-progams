#include<stdio.h>
int main(){
int age;

printf("enter your age \n");
scanf("%d", &age);

if (age>=18)  {
    printf("you are an eligible voter");
}
else {
    printf("not eligible for voting");
}
return 0;
}



