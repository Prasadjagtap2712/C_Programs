/*
9	8	7	6	5	4	3	2	1
		7	6	5	4	3	2	1
				5	4	3	2	1
						3	2	1
								1
*/
#include<stdio.h>
 void main() {
	 int row;
	 printf("Enter number of rows: ");
	 scanf("%d", &row);
	 for(int i = 0; i < row; i++) {
		 for (int j = 0; j < (i*2); j++) {
			 printf("	");
		 }
		 int num = ((row*2)-1-(i*2));
		 for(int k = 0; k <((row*2)-1-(i*2)); k++) {

			 printf("%d	", num);
			 num = num - 1;
		 }
		 printf("\n");
	 }
	 
 }

