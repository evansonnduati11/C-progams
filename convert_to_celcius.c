/*
EVANSON NDUATI 
CT101/G/265Q6/25
*/

#include <stdio.h>

int main() {
    int fahrenheit;
    int celsius;
    
    printf("Enter temperature in Fahrenheit \n ");
    scanf("%d", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Temperature in Celsius = %d \n", celsius);

    return 0;
}
