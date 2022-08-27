
#include<stdio.h>
 void main() {
	 int a;
	 printf("Enter a number: ");
	 scanf("%d", &a);
	 int rem;

	 while(a != 0) {
		 rem = a%10;
		 printf("%d", rem);
		 a = a/10;
	 }
	 printf("\n");

 }

