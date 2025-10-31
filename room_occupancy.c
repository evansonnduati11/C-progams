/*
Evanson Nduati
CT101/G/26516/25
room occupancy
*/
#include <stdio.h>

int main() {
    int occupancy[5][10];
    int floor, room, occupied, vacant;

    // Input occupancy (0 or 1)
    for(floor = 0; floor < 5; floor++) {
        printf("\nEnter occupancy for Floor %d (10 rooms):\n", floor + 1);
        occupied = vacant = 0;

        for(room = 0; room < 10; room++) {
            scanf("%d", &occupancy[floor][room]);
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d: Occupied = %d, Vacant = %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}
