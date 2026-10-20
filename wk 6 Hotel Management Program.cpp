
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float revenue[7];
    float totalRevenue = 0;
    float averageRevenue;

    int occupancy[5][10];
    int chain[3][5][10];

    int i, j, k;
    int occupied, vacant;
    int totalOccupied = 0;

    srand((unsigned int)time(NULL));

    /* PART 1: Weekly Revenue Tracker */

    printf("=== WEEKLY REVENUE TRACKER ===\n");

    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d (KSh): ", i + 1);
        scanf("%f", &revenue[i]);

        totalRevenue = totalRevenue + revenue[i];
    }

    averageRevenue = totalRevenue / 7;

    printf("\nTotal weekly revenue: KSh %.2f\n", totalRevenue);
    printf("Average daily revenue: KSh %.2f\n", averageRevenue);

    /* PART 2: Room Occupancy for One Branch */

    printf("\n=== ONE BRANCH ROOM OCCUPANCY ===\n");

    for (i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for (j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;

            if (occupancy[i][j] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }

        printf("Floor %d: Occupied = %d, Vacant = %d\n",
               i + 1, occupied, vacant);
    }

    /* PART 3: Occupancy Across Three Branches */

    printf("\n=== HOTEL CHAIN OCCUPANCY ===\n");

    for (i = 0; i < 3; i++) {
        int branchOccupied = 0;

        for (j = 0; j < 5; j++) {
            for (k = 0; k < 10; k++) {
                chain[i][j][k] = rand() % 2;

                if (chain[i][j][k] == 1) {
                    totalOccupied++;
                    branchOccupied++;
                }
            }
        }

        printf("Branch %d occupied rooms: %d\n",
               i + 1, branchOccupied);
    }

    printf("Total occupied rooms across all branches: %d\n",
           totalOccupied);

    return 0;
}
