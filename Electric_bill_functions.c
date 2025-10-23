/*
Name: Stephen Mutinda Mutua 
Registration number: CT101/G/26532/25
Unit: Introduction to programming and problem solving 
Description: A program to calculate electric bills. 
*/

#include <stdio.h>

// Function to calculate total electric bill
float calculateElectricBill(int units) {
    float totalBill;

    // Check the range of units consumed and calculate accordingly
    if (units <= 100) {
        totalBill = units * 10; // First 100 units at KSh. 10 each
    } 
    else if (units <= 200) {
        totalBill = (100 * 10) + (units - 100) * 15; // Next 100 units at KSh. 15 each
    } 
    else {
        totalBill = (100 * 10) + (100 * 15) + (units - 200) * 20; // Above 200 units at KSh. 20 each
    }

    return totalBill; // Return the final bill
}

// Main function to test our calculateElectricBill() function
int main() {
    int units;
    float bill;

    // Ask the user for input
    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    // Validate input to ensure it is not negative
    if (units < 0) {
        printf("Error: Invalid input. Kindly enter a valid positive value for units consumed.\n");
        return 1; // End the program with an error code
    }

    // Call the function and store the result
    bill = calculateElectricBill(units);

    // Display the result here below 
    printf("Total electricity bill: KSh. %.2f\n", bill);

    return 0;
}