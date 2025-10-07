/*
	Name: Stephen Stephen Mutua 
	Registration number: CT101/G/26532/25
	Unit: Introduction to programming and problem solving 
	Description: A program to allow bank user to withdraw 
	until balance is zero or negative 
*/

//preprocessor directives 
#include <stdio.h>

//main function here below 
int main() {
	
	// variable declaration 
	int balance = 5000;  // Initialize balance to make the program know it
	long long int acc_number;
	int amount;
	
	//to make it more realistic to the customer 
    // we can pick account number to use it also.
	printf("Enter your bank account number (10 digits): ");
	scanf("%lld", &acc_number);
	printf("\nFor account %lld, the current Balance is Ksh.5000\n", acc_number);
	
	//how to use the loop here below 
	while (balance >= 1) {
		printf("\nEnter amount to withdraw: ");
		scanf("%d", &amount);
		
		//Process withdrawal and update balance
		balance = balance - amount;
		printf("%d withdrawn successfully! Your current balance is Ksh.%d\n", amount, balance);
	}
	// show your customer that withdraw imekamilika na balance yenye imebaki 
	printf("\nTransaction completed. Final balance: Ksh.%d\n", balance);
	return 0;
}