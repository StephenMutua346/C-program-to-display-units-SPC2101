/*
	Name: Stephen Mutinda Mutua 
	Registration number:CT101/G/26532/25
	Unit: Introduction to programming and problem solving 
	Description: A program, a random number generator. for a secret number 
*/

//preprocessor directives 
#include <stdio.h>// main/common input and output 

//main function here below 
int main () {
	
	// variable declaration 
	int secret_number = 15;
	int range;
	int trials = 6;
	
	// this is now the loop while
	while (trials > 0) {
		printf("Kindly enter your Favorite number(%d trials. Hint, between 1 and 20):", trials);
		scanf("%d", &range);
		
		if (range < secret_number) {
			printf("\nToo low");
		}
		else if (range > secret_number) {
			printf("\nToo high");	
		}
		else if (range == 15) {
			printf("\nCongratulations! You got it");
			break; // to make sure if you get correct imemaliza execution 
		}
		
		trials--;// trials decrease by 1
		printf("\nWrong guess! %d Trials remaining!\n", trials);
		
		if (trials == 0) {// when trials are up no more trials 
			printf("\nUnfortunately, your trials are up. try again later.");
		}
	}
	return 0 ;// execution successfully done ✅ 
}