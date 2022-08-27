
/*
   Program 2:
Write a program to print the addition of 1 to 10 with 10 to 1.
Output:
1 + 10 = 11
2 + 9 = 11
3 + 8 = 11
.
.
10 + 1 = 11
*/

#include<stdio.h>
 void main() {
	 int a , b;
	 printf("Enter a 1st number: ");
	 scanf("%d", &a);
	 printf("Enter a 2nd number: ");
	 scanf("%d", &b);

	 
	 int x = 0;
	 for (int i = a; i <= b; i++) {

		 printf("%d + %d = %d\n", i,(b-x),(i+(b-x)));
		 x = x + 1;
	 }
 }

