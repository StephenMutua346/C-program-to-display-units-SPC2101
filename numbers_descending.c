/*
	Name: Stephen Mutinda Mutua 
	Registration number:CT101/G/26532/25
	Unit: Introduction to programming and problem solving 
	Description: A program to display all the numbers from 
	100 to 50 in descending order.
*/

//preprocessor directives 
#include <stdio.h>

//main function here below 
int main () {
	
	// variable declaration 
	int d;
	
	//use of the 'for' loop
	for (d = 100; d >= 50; d--) {
		printf("%d \n", d);
		}
	return 0 ;
	}