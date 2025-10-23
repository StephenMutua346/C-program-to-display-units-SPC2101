/*
Name: Stephen Mutinda Mutua 
Registration number: CT101/G/26532/25
Unit: Introduction To Programming And Problem Solving 
Description: A program to convert degrees 
Celsius to Fahrenheit 
*/
#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    float celsius;

    // Apply the conversion formula
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Return the result
    return celsius;
}

// Main function to test our convertToCelsius() function
int main() {
    float f, c;

    // Ask user to input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    // Call the conversion function
    c = convertToCelsius(f);

    // Display the result here
    printf("Temperature in Celsius: %.2f°C\n", c);

    return 0;
}