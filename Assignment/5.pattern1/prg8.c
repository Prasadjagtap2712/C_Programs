/* 
	1	3	5
	7	9	11
	13	15	17
*/
#include<stdio.h>
 void main() {
	 int row,col,num = 1;
	 printf("Ente a number of rows: ");
	 scanf("%d", &row);
	 printf("Enter a number of cols: ");
	 scanf("%d", &col);
	 for (int i = 1; i <= row; i++) {
		 for (int j = 1; j <= col; j++) {
			 printf("%d	",num);
			 num = num + 2;
		 }
		 printf("\n");
	 }
 }

