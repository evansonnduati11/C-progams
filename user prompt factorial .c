#include<stdio.h>

int main (){
int num, factorial,i,start,limit;
printf("enter the first number on the loop \n");
scanf("%d", &start);

printf("enter the last number on the loop \n");
scanf("%d", &limit);

 for(num = start; num<=limit; num++){
        factorial = 1;

 for(i=start; i<=num;i++){
     factorial = factorial * i;
}
printf("%d! = %d \n", num, factorial);
 }
return 0;
}
