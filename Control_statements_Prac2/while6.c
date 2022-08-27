/*
  Program 6 :
Take an input number from the user and count the no of digits.
Input = 2534
Output = Number of Digits in 2534 is 4
*/
#include<stdio.h>
 void main() {
	 int a;
	 printf("Enter a number: ");
	 scanf("%d", &a);
	 int temp = a;
         int digi = 0;
	 int count = 0;
	 while(a > 0) {
		 digi = a % 10;
		 count = count + 1;
		// printf("%d", digi);
		 a = a/ 10;
	 }
	 printf("Number of Digits in %d is %d\n",temp,count);
 }


