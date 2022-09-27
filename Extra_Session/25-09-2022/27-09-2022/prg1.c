/*
A	b	C	d	E
	e	D	c	B
		B	c	D
			d	C
				C
*/
#include<stdio.h>
 void main() {
	 int row;
	 printf("Enter number of rows: ");
	 scanf("%d", &row);
	 int num = 65;
	 for (int i = 0; i <= row; i++) {
		 for (int j = 0; j < i ; j ++) {
			 printf("	");
		 }
		 for (int k = 0; k < (row-i);k++){
			 if(i+k % 2 == 0) {
				 printf("%c	", num);
				 num = num + 1;
			 }else{
				 printf("%c	", num + 32);
				 num = num + 1;
			 }
		 }
		 num = num - 1;
		 printf("\n");
	 }
 }

