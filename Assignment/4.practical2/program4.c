/* 
  Program 4:
Write a program to take a number as input and print whether that is a prime
number or not.
{Note: Prime number is the one which is divisible by 1 and that
number only}
Input: 41
Output: 41 is the prime number!
*/

#include<stdio.h>
 void main() {
	 int a ;
	 printf("Enter a number: ");
	 scanf("%d", &a);
	 int count = 0;

	 for (int i = 1; i <= a; i++) {
		 if (a%i == 0) {
			 count = count + 1;
		 }
	 }
	 if (count == 2) {
		 printf("%d is the prime number! \n", a);
	 }else{
		 printf("%d is not a prime number\n",a);
	 }
 }
	 

		
	
	 
 
