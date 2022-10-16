/* Find the largest element in 1D array */

#include<stdio.h>
 void main() {
	 int arr[] = {1,2,5,3,4};
	 int max = 0;
	 for (int i = 0; i < 5; i++) {
		 if (arr[i] > max) {
			 max = arr[i];
		 }
	 }
	 printf("The largest element is: %d\n",max);
 }

