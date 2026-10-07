#include<stdio.h>
int main(){
int length, width, perimeter;

printf("enter length");
scanf("%d", &length);

printf("enter width");
scanf("%d", &width);


perimeter = 2 * (length + width);

printf("perimeter = %d", perimeter);

return 0;
}
