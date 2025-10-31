/* 
Name: Evanson Nduati
reg no: CT101/G/26516/25
*/
#include <stdio.h>
int main(){
int units;
int bill;
 
 printf("enter units used \n");
 scanf("%d", & units);
 
 // calculate total
 if(units<=30){
    bill=units*20;
    }
 else if(units<=60){
    bill=units*25;
    }
    else {
    bill=units*30;  
    }
    
    printf("total bill: %.2d",bill);
    return 0;
    }