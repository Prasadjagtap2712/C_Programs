/*
Program 7:
Write a program, take a number and print whether it is less than 10 or greaterthan 10. Take all the values from the user
Input: var=5
Output: 5 Is Less than 10.
Input: var=16
Output: 16 Is greater than 10.
*/

#include<stdio.h>
 void main() {
	 int a ;
	 printf("Enter a number: ");
	 scanf("%d", &a);
	 if (a > 10) {
		 printf("%d is greater than 10\n",a);
	 }else if (a < 10) {
		 printf("%d is less than 10\n", a);
	 } else if (a == 10) {
		 printf("%d is equal to 10\n", a);
	 }else{
		 printf("Enter a valid number\n");
	 }
 }

