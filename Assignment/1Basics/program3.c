
/*
  Write a program to print the first ten, 3 digit number
  */

#include<stdio.h> 
 void main() {
	 int a;
         printf("Enter a number to print further ten 3 digit number: ") ;
	 scanf("%d", &a );

         for (int i = a; i < (a+10) ; i++) {
		 printf("%d\n", i);
	 }
 }

