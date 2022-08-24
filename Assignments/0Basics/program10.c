/*
Program 10: Write a program to check if a character is a vowel or
consonant. Take all the values from the user
Input: var= ”A”;
Output: A is a vowel.
Input: var= ”D”;
Output: D is a consonant.
*/

#include<stdio.h>
 void main() {
	 char var ;
	 printf("Enter a character to check it is vowel or consonant : ");
	 scanf(" %c", &var);

	 if( var == 'A' || var == 'a') {
		printf(" %c is a vowel\n",var);
	 }else if ( var == 'E' || var == 'e') { 
		 printf(" %c is a vowel\n", var);
	 }else if ( var == 'I' || var == 'i') { 
		 printf(" %c is a vowel\n", var);
	 }else if ( var == 'O' || var == 'o') { 
		 printf(" %c is a vowel\n", var);
	 }else if ( var == 'U' || var == 'u') { 
		 printf(" %c is a vowel\n", var);
	 }else  { 
		 printf("%c is a consonant\n",var);
	 }
 }

	 
	         	 
