/*
Write a program to print reverse from 100-1
*/

#include<stdio.h> 
 void main() {
	 int a;
	 int b;

	 printf("Enter a start number: ");
	 scanf("%d", &a);
	 printf("Enter a End number: ");
	 scanf("%d", &b);
	 printf("%d", a);
	 printf("%d", b);

	 if (a > b) {
		 for (int i = a; i <= b; i--) {
			 printf("%d", i); 
		 }
	 }else if (b > a) {
		 for (int i = b; i <= a; i--) {
			 printf("%d", i); 
		 }
	 }
 }
