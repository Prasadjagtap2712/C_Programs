/*
  Program 8: Take input from the user and print the product of digits
Input = 134
Output = product of digits is 12
*/
#include<stdio.h> 
 void main() {
	 int a; 
	 printf("Enter a number: ");
	 scanf("%d", &a);
         int digi = 0;
	 int mul = 1;
	 while(a > 0) {
		 digi = a % 10;
		 mul = mul * digi;
		 a = a / 10;
	 }
	 printf("product of digits is: %d\n", mul);
 }


