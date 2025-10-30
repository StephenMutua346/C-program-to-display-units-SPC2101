/*
Name : Stephen Mutinda Mutua 
Registration number : CT101/G/26532/25
UNIT: Introduction to programming and problem solving 
Description : Hotel Management System Using Arrays.
*/
#include <stdio.h>   // common input output 
#include <stdlib.h> 
#include <time.h>   

//Constants describing the hotel layout
#define DAYS 7          // Number of days in a week
#define SAMPLES 5       // Number of sample revenue values provided per day
#define FLOORS 5        // Number of floors per branch
#define ROOMS_PER_FLOOR 10 // Number of rooms on each floor
#define BRANCHES 3      // Number of branches in the chain

int main(void)
{ 
  // i decided to put random numbers by myself 
  //so dont worry about the values
  // nimefanya hard coding 
  int day_samples[DAYS][SAMPLES] = {
        /* day1 */ {50, 70, 30, 90, 123},
        /* day2 */ {113, 55, 37, 15, 95},
        /* day3 */ {67, 99, 120, 137, 110},
        /* day4 */ {24, 33, 77, 117, 85},
        /* day5 */ {55, 25, 87, 91, 63},
        /* day6 */ {65, 70, 75, 80, 85},
        /* day7 */ {29, 39, 49, 59, 109}
    };

    //revenue call
    int revenue[DAYS];

    // Initialize and compute daily totals from the sample inputs
    for (int d = 0; d < DAYS; ++d) {
        int daily_sum = 0;
        for (int s = 0; s < SAMPLES; ++s) {
            daily_sum += day_samples[d][s];
        }
        revenue[d] = daily_sum;
    }

    // Compute weekly total and average daily revenue
    int weekly_total = 0;
    for (int d = 0; d < DAYS; ++d) {
        weekly_total += revenue[d];
    }
    double average_daily = (double)weekly_total / DAYS;

    // Display results for Part 1
    puts("WEEKLY REVENUE TRACKER 1D\n");
    for (int d = 0; d < DAYS; ++d) {
        // Day numbering: day 1 .. day 7
        printf("Day %d total revenue (sum of %d samples): %d\n", d + 1, SAMPLES, revenue[d]);
    }
    printf("Total weekly revenue: %d\n", weekly_total);
    printf("Average daily revenue: %.2f\n\n", average_daily);

    
    // Seed the random number generator with current time for varied results each run
    srand((unsigned int)time(NULL));

    int occupancy[FLOORS][ROOMS_PER_FLOOR];

    // Fill occupancy with random 0 or 1 values
    for (int f = 0; f < FLOORS; ++f) {
        for (int r = 0; r < ROOMS_PER_FLOOR; ++r) {
            // rand() % 2 yields either 0 or 1
            occupancy[f][r] = rand() % 2;
        }
    }

    // Display occupancy and counts per floor
    puts("\nROOM OCCUPATION FOR EACH BRANCH\n");
    for (int f = 0; f < FLOORS; ++f) {
        int occupied_count = 0;
        printf("Floor %d rooms: ", f + 1);
        for (int r = 0; r < ROOMS_PER_FLOOR; ++r) {
            int state = occupancy[f][r];
            // Print each room's state: '1' for occupied, '0' for vacant
            printf("%d", state);
            if (r < ROOMS_PER_FLOOR - 1) printf(" ");
            if (state == 1) ++occupied_count;
        }
        int vacant_count = ROOMS_PER_FLOOR - occupied_count;
        printf("   | Occupied: %d, Vacant: %d\n", occupied_count, vacant_count);
    }
    putchar('\n');

 
     // occupation across multiple branches 
    int chain[BRANCHES][FLOORS][ROOMS_PER_FLOOR];

    // Fill the 3D array with random occupancy (0 or 1)
    for (int b = 0; b < BRANCHES; ++b) {
        for (int f = 0; f < FLOORS; ++f) {
            for (int r = 0; r < ROOMS_PER_FLOOR; ++r) {
                chain[b][f][r] = rand() % 2;
            }
        }
    }

    // Calculate total occupied rooms across all branches
    int total_occupied = 0;
    for (int b = 0; b < BRANCHES; ++b) {
        for (int f = 0; f < FLOORS; ++f) {
            for (int r = 0; r < ROOMS_PER_FLOOR; ++r) {
                if (chain[b][f][r] == 1) {
                    ++total_occupied;
                }
            }
        }
    }

    // Optionally, display occupancy summary per branch (helpful for inspection)
    puts("\nMULTIPLE BRANCHES OCCUPATION\n");
    for (int b = 0; b < BRANCHES; ++b) {
        int branch_occupied = 0;
        for (int f = 0; f < FLOORS; ++f) {
            for (int r = 0; r < ROOMS_PER_FLOOR; ++r) {
                branch_occupied += chain[b][f][r];
            }
        }
        printf("Branch %d: Occupied rooms = %d (out of %d)\n",
               b + 1, branch_occupied, FLOORS * ROOMS_PER_FLOOR);
    }
    printf("Total occupied rooms across all branches: %d (out of %d)\n",
           total_occupied, BRANCHES * FLOORS * ROOMS_PER_FLOOR);

    return 0;
}