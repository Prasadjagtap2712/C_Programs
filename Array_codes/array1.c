/* WAP to creat 1D, 2D, and 3D array and print them using pointer*/

#include<stdio.h>
 void main() {
	 int arr1[] = {1,2,3,4,5};
 	 int arr2[][3] = {
		 	  {1,2,3},
		 	  {4,5,6},
		 	  {7,8,9} 
			 };
	 int arr3[2][3][3] = {
		 		{{1,2,3},{4,5,6},{7,8,9}},
				 {{10,11,12},{13,14,15},{16,17,18}}
				};
	 printf("arr1 = ");

	for (int i = 0; i < 5; i++){
		printf("%d ", *(arr1+i));
	 }
	printf("\n");
	printf("arr2 = ");
	for(int i = 0; i < 3; i++) {
		for (int j= 0; j < 3; j++) {
		printf("%d ", *(*(arr2 + i)+j));
		}
	}
	printf("\n");
	printf("arr 3 = ");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				printf("%d ", *(*(*(arr3+i)+j)+k));
			}
		}
	}
	printf("\n");

 }
 
