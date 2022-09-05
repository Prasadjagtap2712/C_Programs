/* 
	$	=	$	=
	$	=	$	=
	$	=	$	=
	$	=	$	=
*/
#include<stdio.h>
 void main() {
	 int row,col;
	 printf("Ente a number of rows: ");
	 scanf("%d", &row);
	 printf("Enter a number of cols: ");
	 scanf("%d", &col);
	 for (int i = 1; i <= row; i++) {
		 for (int j = 1; j <= col; j++) {
			 if (j%2==1) {
				 printf("$	");
			 }else{
				 printf("=	");
			 }
			 
		 }
		 printf("\n");
	 }
 }


