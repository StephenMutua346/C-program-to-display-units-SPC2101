/*
Name: Stephen Mutinda Mutua
Registration Number: CT101/G/26532/25
Course: Bachelor Of Science In Computer Science
Unit:Introduction To Programming and Problem Solving
Description:A program to calculate surface area and volume
*/
#include <stdio.h>
 #define pi 3.142
int main (){
    //To calculate surface area
    float radius, Height, Surface_area, Volume;
    //take cylinder measurements
    printf("\n Enter radius: ");
    scanf("%f", &radius);
    
    printf("\n Enter Height: ");
    scanf("%f", &Height);
    
    //calculate volume
     Surface_area = 2 * pi * radius * radius + 2 * pi * radius * Height;
     Volume = pi * radius * radius * Height;
    printf("Surface_area of the cylinder = %.3f", &Surface_area);
    printf("\nVolume of the cylinder = %.4f", &Volume);
    return 0;//execution successful
}