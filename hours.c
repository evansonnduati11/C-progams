#include <stdio.h>

int main() {
    int hours;

    printf("How many hours until sunrise? ");
    scanf("%d", &hours);

    while (hours > 0) {
        printf("%d hour(s) remaining...\n", hours);
        hours--;
    }

    printf("The sun has risen! Time for a run.\n");

    return 0;
}
