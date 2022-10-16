/* WAP to print 2D array in one for loop using pointer */

#include<stdio.h>
 void main() {
	 int arr[][3] = {
		 	{1,2,3},
			{4,5,6},
			{7,8,9}
	 		};
	 int *ptr = &arr[0][0];
	 printf("arr = ");
	 for (int i = 0 ; i < 9; i++) {
		 printf("%d ", *(ptr + i));

	 }
	 printf("\n");
 }

