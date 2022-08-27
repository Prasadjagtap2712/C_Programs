/* take input from user and find sum of it and print avg of it */

#include<stdio.h>
 void main() {
	 int a ;
	 int sum = 0;

	 for(int i = 1; i <= 10 ; i++) {
		 printf("Enter a num %d :",i);
		 scanf("%d", &a);

		 sum = sum + a;

	 }

	 printf("The sum of the number is : %d\n",sum);
	 printf("The avg of number is %d\n", sum/10);

 }

