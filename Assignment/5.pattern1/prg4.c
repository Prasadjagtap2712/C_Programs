/*
	A	B	c
	D	E	F
	G	H	I
*/
#include<stdio.h>
 void main() {
	 int row,col, ch = 65;
	 printf("Enter a number of rows: ");
	 scanf("%d", &row);
	 printf("Enter a number of cols: ");
	 scanf("%d", &col);
	 for (int i = 1; i <= row; i++) {
		 for (int j = 1; j <= col; j++){
			 printf("%c   ",ch);
			 ch++;
		 }
		 printf("\n");
	 }
 }

