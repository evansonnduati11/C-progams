// description: prompt user program
#include <stdio.h>

int main()
{
	int height;
	int balance;
	
	printf("What is your height \n");
	scanf("%d", &height); 
	
	printf("what is your balance \n");
	scanf("%d", &balance);
	
	printf("height: %d \n", height);
	printf("balance: %d \n", balance);
	
	return 0;
}