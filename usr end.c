#include<stdio.h>
int main(){
int num, i;

printf("enter number \n");
scanf("%d", &num);

for(i=2; i<=113; i++){
    printf("%d * %d = %d \n",num, i, num*i);
}
return 0;
}
