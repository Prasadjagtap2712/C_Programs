/*
 Program 7 :
Take an input number from the user and print the sum of digits.
Input = 1234
Output = sum of digits is 10
*/
#include<stdio.h>
 void main() {
	 int a; 
	 printf("Enter a number: ");
	 scanf("%d", &a);
	 int sum  = 0;
	 int digi = 0;
	 while(a > 0) {
		 digi = a % 10;
		 sum = sum + digi;
		 a = a / 10;
	 }
	 printf("sum of digits is: %d\n", sum);
 }


