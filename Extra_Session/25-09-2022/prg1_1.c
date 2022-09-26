/*
  *	* 	*	*
  	* 	*	*
		*	*
			*
*/
#include<stdio.h>
 void main() {
	 int row,col;
	 printf("Enter number of rows: ");
	 scanf("%d", &row);
	 printf("Enter number of cols: ");
	 scanf("%d", &col);
	 for(int i = 0; i < row; i++) {
		 for (int j = 0 ; j < i; j ++){
			 printf("	");
		}
		 for (int k = 0; k < (row-i); k++)	{
			printf("*	");
		 
		 }
		 printf("\n");

	 }
 }


