/*
1
2  3
4  5  6
7  8 
9
*/
#include<stdio.h>
 void main() {
	 int row,incre = 3,num = 1;
	 printf("Enter number of row: ");
	 scanf("%d", &row);
	 for (int i = 0; i < row; i ++) {
		 if (i <= (row/2)) {
			 for (int j = 0; j < (i+1); j++) {
				 printf("%d  ", num );
				 num = num + 1;
			 }
		 }else{
			 for (int k = 0; k < (row-incre); k++) {
				 printf("%d  ", num);
				 num = num + 1;
			 }
			 incre = incre + 1;
		 }
		 printf("\n");
	 }
 }


