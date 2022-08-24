/*
Program 1:
Write a program to print the value and size of the below variables.Take all
the values from the user
num=10
chr = ‘S’
rs = 55.20
crMoney = 542154313480.544543
*/

#include<stdio.h>
 void main() {
	 int num;
	 char chr;
	 float rs;
	 double crMoney;

	 printf("Enter a number: ");
	 scanf("%d", &num);
	 printf("The Size of the number %d is %ld bytes\n",num, sizeof(num));
	 printf("Enter a character: ");
	 scanf(" %c", &chr);
	 printf("The Size of the character %c is %ld bytes\n",chr, sizeof(chr));
	 printf("Enter a float number: ");
	 scanf("%f", &rs);
	 printf("The Size of the float number %f is %ld bytes\n",rs, sizeof(rs));
	 printf("Enter a double number: ");
	 scanf("%lf", &crMoney);
	 printf("The Size of the double number %lf is %ld bytes\n",crMoney, sizeof(crMoney));
 }

