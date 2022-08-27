/*
  Program 9: Take an input number from the user and print the number in reverse
Input: 120654
Output: 456021
*/

#include<stdio.h> 
 void main() {
	 int a;
	 printf("Enter a numver: ");
	 scanf("%d", &a);
	 int digi = 0;
         int rem = 0;
	 while(a > 0) {
		 digi = a % 10;
		 rem =   (rem * 10) + digi;
		// printf("%d", digi );
		 a = a / 10;
	 }
	 printf("%d\n", rem);
	 printf("\n");
 }

