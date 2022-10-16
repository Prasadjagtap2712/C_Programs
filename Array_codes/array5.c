/* WAP to find the diagonal sum of 3D array */

#include<stdio.h>
 void main() {
	 int arr[2][3][3] = {
		 	    {{1,2,3},{4,5,6},{7,8,9}},
			    {{10,11,12},{13,14,15},{16,17,18}}
	 		};
	 int sum = 0;
	 for (int i = 0; i < 2; i++) {
		 for (int j = 0; j < 3; j++) {
			 for (int k = 0; k < 3; k++) {
				 
			 if ((j+k)%2 == 0) {
				 sum = sum + arr[i][j][k];
			 }
		 }
	 }
	 }

	 printf("The diagonal sum of 3D array is: %d\n", sum);
 }

