/*
Evanson Nduati
CT101/G/26516/25
Store revenue for seven days
*/

#include <stdio.h>

int main() {
    int revenue[7];
    int i, total = 0;
    float average;

    
    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%d", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;

    printf("\nTotal Weekly Revenue = %d\n", total);
    printf("Average Daily Revenue = %.2f\n", average);

    return 0;
}

