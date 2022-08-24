/*
Program 6:
Write a program to check if a number is even or odd. Take all the values
from the user
Input: var=10;
Output: 10 is an even no
Input: var=37;
Output: 37 is an odd no
*/

#include<stdio.h>
 void main() {
	 int a ;
	 printf("Enter a number: ");
	 scanf("%d", &a);
	 if (a%2==0 ) {
		 printf("%d is even number\n",a);
	 }else if(a%2!=0 ) {
		 printf("%d is odd number\n", a);
	 }else{
		 printf("Enter a valid number\n");
	 }
 }


