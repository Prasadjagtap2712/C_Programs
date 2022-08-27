#include<stdio.h>
 void main() {
	 int a, count= 0;

	 printf("Enter a number: ");
	 scanf("%d", &a);

	 for (int i = 1; i <= a; i++) {
		 if (a%i == 0) {
			 count = count + 1;
		 }
	 }
	 printf("The count of number is %d\n", count);
 }



