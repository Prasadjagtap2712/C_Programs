/*
Program 3: WAP to find max among 2 numbers. Take all the values from the
user
Input : 2 4
Output: 4
*/

#include<stdio.h>
 void main() {
	 int a ;
	 int b;
	 printf("Enter a First Number: ");
	 scanf("%d", &a);
	 printf("Enter a Second NUmber: ");
	 scanf("%d", &b);
	 if (a > b) {
		 printf("%d is greater than %d\n",a,b);
	 }else if(b > a) {
		 printf("%d is greater than %d\n",b,a);
	 }else if(b == a) {
		 printf("%d is equal to  %d\n",b,a);
	 }else{
		 printf("Please enter a valid number\n");
	 }
 }

