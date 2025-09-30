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
	int Average_marks, Attendance;
	
	//take the user average marks and and attendance
	printf("What is your Average Marks?:");
	scanf("%d", &Average_marks);
	
	printf("\nKindly enter your attendance as a percentage:");
	scanf("%d", &Attendance);
	
	//conditions if and else lies here
	if (Attendance >= 75 && Average_marks >= 40) {
		printf("Congratulations you qualify to do the final exams!");
	} 
	else { printf ("Oops! You Are Not eligible.");}
	return 0;
}