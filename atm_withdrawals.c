#include <stdio.h>
int main () {
int balance=10000;
int withdraw;
while ( balance>0){
    printf("enter withdraw amount \n");
    scanf("%d", &withdraw);
    balance = balance - withdraw;
    printf("balance:%d \n", balance);
    }
    printf("out of funds \n");
    return 0;
    }