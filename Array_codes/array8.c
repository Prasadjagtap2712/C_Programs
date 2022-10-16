/*  Find the largest element from given 3D array */

#include<stdio.h>
 void main() {
	 int arr[2][3][3] = {
		 		{{1,2,3},{4,5,6},{7,8,9}},
				{{10,11,12},{13,14,15},{16,17,18}}
	 		    };
 	int max = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (arr[i][j][k] > max) {
					max = arr[i][j][k];
				}
			}
		}
	}
	printf("The largest element in 3d array is: %d \n", max);
 }


