/*
	A	B	C	D
	B	C	D	E
	C	D	E	F
	D	E	F	G
*/
#include<stdio.h>
 void main() {
	 int row, col;
	 printf("Enter a number of rows: ");
	 scanf("%d", &row);
	 printf("Enter a number of cols: ");
	 scanf("%d", &col);
	 for (int i = 1; i <= row; i++) {
		 int ch = i+64;
		 for (int j = 1; j <= col; j++) {
			 printf("%c   ",ch);
			 ch++;
		 }
		 printf("\n");
	 }
 }


