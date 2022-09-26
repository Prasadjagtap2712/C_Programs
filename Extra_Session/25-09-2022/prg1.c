/*
 A	b	C	d
 	d	E	f
		F	g
			g
*/
#include<stdio.h>
 void main() {
	 int row,col,num=65;
	 printf("Enter a number of rows: ");
	 scanf("%d", &row);
	 printf("Enter number of cols: ");
	 scanf("%d", &col);
	 for (int i = 0; i < row; i++ ) {
		 for (int j = 0; j < i; j++) {
			 printf("  ");
		 }
                 for (int k = 0; k < (col-i); k++){

		 	if ((i + k) % 2 == 0)	{
				printf("%c ",num) ;
				num = num + 1;
		 	}else{
			 	printf("%c ", num + 32);
			 	num = num + 1;
		 }
		 }
		 printf("\n");
		 num = num - 1;
	 }
		
 }
 






