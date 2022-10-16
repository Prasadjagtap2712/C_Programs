/* Find the largest element from 2D array */

#include<stdio.h>
 void main() {
	 int arr[3][3] = {
		 	 {1,2,3},
			 {4,5,6},
			 {7,8,9}
	 		};
	 int max = 0;
	 for (int i = 0; i < 3; i++) {
		 for (int j = 0; j < 3; j++){
			 if (arr[i][j] > max) {
				 max = arr[i][j];
			 }
		 }
	 }
	 printf("The maximum elemnt is: %d \n", max);
 }

