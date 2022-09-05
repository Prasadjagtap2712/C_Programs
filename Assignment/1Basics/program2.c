/*
 Write a program to print the first 100 numbers
 */
#include<stdio.h> 
 void main() {
	 int a ;
	 printf("Enter a number to print further 100 numbers : ");
	 scanf("%d", &a);
	 for(int i = a; i < (a+100); i++ ) {
		 printf("%d\n ", i);
	 }
 }

