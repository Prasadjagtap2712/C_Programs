/* 
  Program 10 :
Take a number from the user and print the Fibonacci series up to that number.
Input : 10
Output 0 1 1 2 3 5 8
*/
#include<stdio.h>
 void main() {
	 int a;
	 printf("Enter a number: ");
	 scanf("%d", &a);

         int f = 0;
         int o = 1;
	 int temp;

	 while(f <= a) {
		temp = f;
		printf("%d ",temp);
		f = f + o;

                o = temp;
	 }

	 printf("\n");
 }


		 


