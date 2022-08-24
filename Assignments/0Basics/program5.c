/*
Program 5: WAP to take numerical input from the user and find whether the number is
divisible by 5 and 11. Take all the values from the user
Input: 55
Output: 55 is divisible by 5 & 11
Input: 15
Output: 15 is not divisible by 5 & 11
*/

#include<stdio.h>
 void main() {
	 int a ;
	 printf("Enter a number: ");
	 scanf("%d", &a) ;
	 if (a%5==0 && a%11==0 ) {
		 printf("%d is divisible by 5 and 11\n",a);
	 }else{
		 printf("Number is not divisible by 5 and 11\n");
	 }
 }


