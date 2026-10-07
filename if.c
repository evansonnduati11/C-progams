#include<stdio.h>

int main(){
int choice;

printf("1.pizza \n");
printf("2.lazagna \n \n");

printf("enter your preffered meal \n");
scanf("%d", &choice);

if(choice==1){
    printf("you selected pizza");
}
else if(choice==2){
    printf("you selected lazagna");
}
else
{
    printf("not available");
}
return 0;
}
