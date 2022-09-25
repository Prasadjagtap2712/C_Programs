/*
4. WAP to the array elements in reverse order
Take array size and array elements from the user
IP : enter array : 10 12 13 15 16 14
Op: 14 16 15 13 12 10
*/
#include<stdio.h>
 void main() {
	 int size;
	 printf("Enter a size of array: ");
	 scanf("%d", &size);
	 int arr1[size],arr2[size];
	 printf("Enter a array elements: ");
	 for (int i = 0; i < size; i++) {
             scanf("%d", &arr1[i]);
	 }
	 for (int i = size-1; i >= 0; i--) {
		 printf("%d	",arr1[i]);

	 }
 }

