/*
  Program 3 :
WAP to print the divisors & count of divisors of the entered num.
Input: 15
Output: the divisors are 1 3 5 15
The count of divisors is 4
Additions of divisors 24
*/

#include<stdio.h> 
 void main() {
	 int a ;
	 printf("Enter a number: ");
	 scanf("%d", &a);
         int count = 0;
	 int sum = 0;
	 for (int i = 1 ; i <= a; i++) {
		 if (a%i == 0) {
			 count = count + 1;
			 sum = sum + i;
			 printf("the divisor are: %d\n", i);
		 }
	 }
		 printf("The count of divisior is: %d\n", count);
		 printf("Addition of divisor is : %d\n", sum);
 }
	
 


