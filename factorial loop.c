
#include<stdio.h>

int main (){
int num, factorial,i;

 for(num = 1; num<=5; num++){
        factorial = 1;

 for(i=1; i<=num;i++){
     factorial = factorial * i;
}
printf("%d! = %d \n", num, factorial);
 }
return 0;
}
