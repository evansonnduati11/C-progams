#include<stdio.h>

int main (){
int num, factorial,i,limit;

printf("enter the last number on the loop \n");
scanf("%d", &limit);

 for(num = 1; num<=limit; num++){
        factorial = 1;

 for(i=1; i<=num;i++){
     factorial = factorial * i;
}
printf("%d! = %d \n", num, factorial);
 }
return 0;
}
