#include<stdio.h>
 void main() {
	 int a;
	 int count = 0;
	 printf("Enter a number: ");
	 scanf("%d", &a);

	 for (int i = 1; i < a; i++) {
		 if (a%i == 0) {
			 count = count + 1;
		 }
	 }
	 if (count == 1) {
		 printf("%d is prime number\n",a);
	 }else{
		 printf("%d is not prime number\n",a);
	 }
 }


