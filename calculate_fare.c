 /*
 EVANSON NDUATI 
CT101/G/26516/25
*/
#include <stdio.h>

int main() {
    int kilometres;
    int fare;
    printf("Enter kilometers covered\n ");
    scanf("%d", &kilometres);

    fare = kilometres * 50; 

    printf("Total fare = Ksh %d\n", fare);

    return 0;
}