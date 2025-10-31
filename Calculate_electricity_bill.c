/* 
Evanson Nduati
CT101/G/26516/25
*/
#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter the number of units consumed \n ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    } 
    else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    printf("Total electricity bill = Ksh %.2f\n", bill);
    return 0;
}
