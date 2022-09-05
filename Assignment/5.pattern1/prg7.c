/* 
	1	2	9	4
	25	6	49	8
	81	10	121	12
	169	14	225	16

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
			 if (j%2==1) {
				 printf("%d	",num*num);
				 num++;
			 }else{
				 printf("%d	",num);
				 num++;
			 }
	 }
	 printf("\n");
 }
 }
