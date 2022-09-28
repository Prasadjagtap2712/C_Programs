#include<stdio.h>
 void main() {
	 int row,num = 3;
	 printf("Enter number of row: ");
	 scanf("%d", &row);
	 for (int i = 0; i < row; i++) {
		 if(i <= (row/2)){
			 for (int j = 0; j < (i+1); j++) {
				 printf("*");
			 }
		 }else{
			 for (int k = 0; k < (row-num); k++) {
				 printf("*");
			 }
		 num = num + 1;
		 }
		
		
	    printf("\n");
	 }
	 
 }

