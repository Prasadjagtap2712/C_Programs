/*
1. WAP to find the given element from the array
Take array size and array elements from the user
IP : enter array : 10 12 13 15 16 14
Ip : enter element : 15
Op: 15 is present
*/
#include<stdio.h>
 void main() {
	 int size;
	 printf("Enter a array size: ");
	 scanf("%d", &size);
	 int arr[size];
	 printf("Enter a array elements: \n");


 
  	 for(int i = 0; i < size; i++) {
		 scanf("%d", &arr[i]);
		
	 }

	 printf("Enter array  element to be search: ");
	 int search;
	 scanf("%d", &search );
	 for(int j = 0; j < size; j++) {
		 if (arr[j] == search) {
			 printf("Element found ");
			 break;
		 }
		 
	 }

	 


 }
