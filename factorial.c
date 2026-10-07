#include<stdio.h>

int main (){
int num, factorial =1,i;

printf("enter number");
scanf("%d", &num);

 for(i = 1; i<=num; i++){
    factorial = factorial * i;
}
printf("factorial of %d = %d \n", num, factorial);

return 0;
}
