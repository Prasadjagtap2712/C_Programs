/*
Program 8: Write a program, take a character and print whether it is in
UPPERCASE or lowercase. Take all the values from the user
Input: var = A
Output: You entered the UPPERCASE character.
*/

#include<stdio.h>
 void main() {
	 char var ;
	 printf("Enter a variable: ");
	 scanf("%c", &var);
	 if (var >= 'A' && var <= 'Z') {
		 printf("You Enter a UPPERCASE letter \n");
	 }else if(var >= 'a' && var <= 'z') {
		printf("You enter a LOWERCASE letter\n");
	 }else{ 
		 printf("Enter a valid letter \n");
	 }
 }

	 	 
