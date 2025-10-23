/*
Name: Stephen Mutinda Mutua 
Registration number: CT101/G/26532/25
Unit: Introduction To Programming And Problem Solving 
Description: A program to calculate fare based on
             the distance covered in kilometres.
*/

#include <stdio.h>

// Function to calculate fare
float calculateFare(float distance) { 
    float fare;
    fare = distance * 50;  // Fare rate = 50 per km
    return fare;           // Return the calculated fare
}

// Main function
int main(void) { 
    // Variable declaration
    float distance;
    float fare;

    // Ask user to enter distance
    printf("Kindly enter distance covered in kilometres: ");
    scanf("%f", &distance);

    // Call the function 
    fare = calculateFare(distance);

    // Display the result
    printf("The total fare is KSh %.2f\n", fare);

    return 0; // End of program
}