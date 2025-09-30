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
	int value;
		//general top print statements
	printf("Kindly select one of the options below:");
	printf("\n1. 100MBs for Ksh. 50");
	printf("\n2. 500MBs for Ksh. 200");
	printf("\n3. 1GB for Ksh. 350");
	printf("\n4. 2GB for Ksh. 600");
	
	//take user input here
	printf("\nKindly select one of the options above; in digits (1 to 4):");
	scanf("%d", &value);
	
	//conditions if and else lies here
	if (value == 1) {
		printf("\nYou selected 100MBs: The total cost is ksh. 50");
	} 
	else if(value == 2){
			printf("\nYou selected 500MBs: The total cost is ksh. 200");
	}
	else if(value == 3) {
			printf("\nYou selected 1GBs: The total cost is ksh. 350");
	}
	else if(value == 4) {
			printf("\nYou selected 2GBs: The total cost is ksh. 600");
	}
	else {
	printf("ERROR! KINDLY INPUT A VALID VALUE");
	}
	return 0;
}