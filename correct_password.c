/*
	Name: Stephen Stephen Mutua 
	Registration number: CT101/G/26532/25
	Unit: Introduction to programming and problem solving 
	Description: A program to run the correct password (do-while)
*/

#include <stdio.h>

int main() {
	// Variable declaration 
	int correct_password = 1234;
	int password;
	
	do {
		// Prompt user for password
		printf("Kindly enter your password: ");
		scanf("%d", &password);// take user password. 
		
		//we are checking  if password is correct here
		if (password == correct_password) {
			printf("Access Granted!\n");
			break; // Exit the loop when correct password is entered
		} else {
			printf("Incorrect password! Check password and try again\n");
		}
		
		//here the exclamation mark means is not. 
	} while (password != correct_password); // Continue asking for the password until correct one is entered
	
	return 0;
}