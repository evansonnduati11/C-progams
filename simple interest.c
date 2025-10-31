// simple interest program
#include<stdio.h>
int main(){
	float interest,principal,rate,time;
	
	printf("enter principal \n");
	scanf("%f",&principal);
		
	printf("enter time \n");
	scanf("%f",&time);
		
	printf("enter rate \n");
	scanf("%f",&rate);
	
	interest= principal*rate*0.01*time;
	
	printf("interest=%f",interest);
	return 0;
}

