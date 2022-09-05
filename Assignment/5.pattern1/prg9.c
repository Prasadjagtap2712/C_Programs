/* 
	2	5	10
	17	26	37
	50	65	82
*/
#include<stdio.h>
 void main() {
	 int row,col,num = 2,add = 3;
	 printf("Ente a number of rows: ");
	 scanf("%d", &row);
	 printf("Enter a number of cols: ");
	 scanf("%d", &col);
	 for (int i = 1; i <= row; i++) {
		 for (int j = 1; j <= col; j++) {
			 printf("%d	", num );
			 num = num + add;
			 add = add + 2;
		 }
		 printf("\n");
	 }
 }

	 
