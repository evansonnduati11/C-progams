/*
Evanson Nduati
CT101/G/26516/25
*/
#include <stdio.h>
int main(){
     int password;
     do {
     printf("enter password \n");
     scanf("%d", &password);
     }
     while(password  !=1234);
     printf("access accepted \n");
     return 0;
     }