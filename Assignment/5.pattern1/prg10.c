/* 
	D4	C3	B2	A1
	D4	C3	B2	A1
	D4	C3	B2	A1
	D4	C3	B2	A1
*/
#include<stdio.h>
 void main() {
	 int row,col;
	 printf("Ente a number of rows: ");
	 scanf("%d", &row);

	 printf("Enter a number of cols: ");
	 scanf("%d", &col);
	 for (int i = 1; i <= row; i++) {
	 	 int temp = row;
		 
		 for (int j = 1; j <= col; j++) {
			 printf("%c%d 	", 64+temp,temp);
			 temp--;
		 }
		 printf("\n");
	 }
 }

			 


