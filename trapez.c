
#include<stdio.h>

int main(){
float a, b, height, area;

printf("enter a:\n");
scanf("%f", &a);

printf("enter b:\n");
scanf("%f", &b);

printf("enter height:\n");
scanf("%f", &height);

area = 0.5* (a+b)* height;


printf("area = %f", area);

return 0;

}
