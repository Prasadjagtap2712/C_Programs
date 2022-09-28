/*
*  
*  *  *
*  *  *  *  *
*  *  *
*
*/
#include<stdio.h>
 void main() {
	 int row,num = 2;
	 printf("Enter number of rows: ");
	 scanf("%d", &row);
	 for (int i = 0 ; i < row; i++) {
		 if (i <= (row/2)) {
			 for (int j = 0; j < ((i*2)+1); j++) {
				 printf("*  ");
			 }
		 }else{
			 for(int k = 0; k < (row - num);k++) {
				 printf("*  ");
			 }
			 num = num + 2;
		 }

		 printf("\n");
	 }
 }

