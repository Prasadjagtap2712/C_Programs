/*
Program 4: WAP to find min among 2 numbers. Take all the values from the user
Input : 2 3
Output: 2
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
		 printf("%d is minimum than %d\n",b,a);
	 }else if(b > a) {
		 printf("%d is minimum than %d\n",a,b);
	 }else if(b == a) {
		 printf("%d is equal to  %d\n",b,a);
	 }else{
		 printf("Please enter a valid number\n");
	 }
 }

