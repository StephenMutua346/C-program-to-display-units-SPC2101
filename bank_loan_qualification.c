/*
Name: Stephen Mutinda Mutua
Registration Number: CT101/G/26532/25
Course: Bachelor Of Science In Computer Science
Unit:Introduction To Programming and Problem Solving
Description:A program to check for loan qualifications by a bank and give feedback.
*/
#include <stdio.h>
 #define pi 3.142
int main (){
   // variable declaration
   int age , Annual_income;
  printf("How old are you now?: ");
  scanf("%d", &age);
  
  printf("\nWhat si your Annual Income?;");
  scanf("%d", &Annual_income);
  
  //check for loan qualifications and give the feedback.
  if(age >=21 && Annual_income >= 21000.0){
  printf("\nCongratulations you qualify for a loan.");
  } else {
  printf("\nUnfortunately, we are unable to offer you a loan at this time.");
  } 
  return 0;
}