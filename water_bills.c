/*
Name: Stephen Mutinda Mutua
Registration number: CT101/G/26532/25
Unit: Introduction to Programming And Problem Solving
Description: A program to checks if a student
 is eligible for final exams
 */

#include <stdio.h> //preprocessor directive for main input and output

int main() { // main header file for c programs
	//variable declaration
	int Units;
	float Total_cost;
	
	//take the user units consumed
	printf("What is your Total number of units consumed?: ");
	scanf("%d", &Units);
	
	//conditions and calculations - CORRECTED
	if (Units >= 0 && Units <= 30) {
		Total_cost = Units * 20;
		printf("Total_cost = Ksh. %.2f", Total_cost);
	} 
	else if (Units >= 31 && Units <= 60) {
		Total_cost = Units * 25;
		printf("Total_cost = Ksh. %.2f", Total_cost);
	}
	else if (Units > 60) {
		Total_cost = Units * 30;
		printf("Total_cost = Ksh. %.2f", Total_cost);
	}
	else {
		printf("Invalid input! Units cannot be negative.");
	}
	
	return 0;
}