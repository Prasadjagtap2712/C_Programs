/* WAP to print 3D array in one for loop using pointer */

#include<stdio.h>
 void main() {
	 int arr[2][3][3] = {
		   {{1,2,3},{4,5,6},{7,8,9}},
		   {{10,11,12},{13,14,15},{16,17,18}}
	 	   };
	 
	 int *ptr = &arr[0][0][0];
	 for (int i = 0; i < 18; i++) {
		 printf("%d ", *(ptr + i));
	 }
 }

