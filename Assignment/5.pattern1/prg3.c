/*
  If possible take no of rows from the user
	1	1	1	1
	2	2	2	2
	3	3	3	3
	4	4	4	4
*/
#include<stdio.h>
 void main() {


	 int row, col;
	 printf("Enter a number of rows: ");
	 scanf("%d", &row);
	 printf("Enter number of col: ");
	 scanf("%d", &col);

	 for (int i = 1; i <= row; i++) {
		 for (int j = 1; j <= col; j++) {
			 printf("%d   ", i);
		 }
		 printf("\n");
	 }
}

