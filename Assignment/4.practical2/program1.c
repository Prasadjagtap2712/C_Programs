/*
  Program 1 :
WAP to Find the sum of numbers that are not divisible by 3 up to a given number
Input: 10
Output: sum of numbers not divisible by 3 is 37
*/
 

#include<stdio.h>
 void main() {
	 int a ;
	 printf("Enter a number :") ;
	 scanf("%d", &a);
         int sum = 0;
	for (int i = 1; i <= a; i++) {
		if (i%3 != 0) {
			
		          sum = sum + i;
		}
	}
	printf("sum of numbers not divisible by 3: %d\n",sum);
 }



