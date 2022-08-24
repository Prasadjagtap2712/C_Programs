/*
Program 9: Write a program, take a number and print whether it is positive or
negative. Take all the values from the user
Input: var=5
Output: 5 is a positive number
Input: var=-9
Output: -9 is a negative number
*/

#include<stdio.h>
 void main() {
	 int a ;
	 printf("Enter a number: ");
	 scanf("%d", &a);
	 if (a >= 0) {
		 printf("%d is a positive number\n",a);
	 }else if(a < 0) {
		 printf("%d is negitive number\n", a);
	 }else {
		 printf("Enter a valid number\n");
	 }
 }


