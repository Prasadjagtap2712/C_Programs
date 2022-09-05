/*
Write a program to print even numbers 1-100
*/

#include<stdio.h> 
 void main() {
	 int a ;
	 int b ;
	 printf("Enter a start number: ");
	 scanf("%d", &a);
	 printf("Enter a end number: ");
	 scanf("%d", &b);

	 for (int i = a; i <= b; i++) {
		 if (i%2 == 0) { 

		 	printf("%d\n", i);
		 }

	 }
 }


