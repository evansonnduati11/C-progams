/*
CT101/G/26516/25
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int chain[3][5][10];
    int b, f, r;
    int totalOccupied = 0;

    // Assign random 0 or 1 to each room
    for(b = 0; b < 3; b++) {
        for(f = 0; f < 5; f++) {
            for(r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2; // 0 or 1
                if(chain[b][f][r] == 1)
                    totalOccupied++;
            }
        }
    }

    printf("Total occupied rooms in all branches = %d\n", totalOccupied);

    return 0;
}