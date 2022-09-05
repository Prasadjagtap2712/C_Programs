/* 
  1. If possible take no of rows from the user
     1    2    3    4
     2    3    4    5
     3    4    5    6
     4    5    6    7

*/

#include<stdio.h>
 void main() {
	 int row,col,ans;
	 printf("Enter a number of rows: ");
	 scanf("%d", &row);
	 printf("Enter a number of cols: ");
	 scanf("%d", &col);
                
		for (int i = 1; i <= row; i++) {
			ans = i;
			for (int j = 1; j <= col; j++) {
				printf("%d  ", ans);
				ans++;
			}
			
			printf("\n");
		}
 }


