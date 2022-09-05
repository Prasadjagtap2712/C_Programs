/*
  If possible take no of rows from the user
	1	2	3
	a	b	c
	1	2	3
	a	b	c
*/

#include<stdio.h> 
 void main() {
	 int row,col;
	 
	 int num = 1;
	 printf("Enter a number of rows: ");
	 scanf("%d", &row);
	 printf("Enter a number of cols: ");
	 scanf("%d", &col);
	 for (int i = 1; i <= row; i++) {
		 int ch = 97;
		 int num = 1;
		 for (int j = 1; j <= col; j++) {
			 if (i%2==1) {
				 printf("%d   ", num);
				 num++;
			 }else{
				 printf("%c   ", ch);
				 ch++;
			 }
		 }
		 printf("\n");

	 }
	 printf("\n");
 }

