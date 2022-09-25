/*
3. WAP to add two different arrays of the same size
Take array size and array elements from the user
IP : enter 1st array : 10 12 13 15
Ip : enter 2nd array: 1 2 3 4
Op: 11 14 16 19
*/
#include<stdio.h>
 void main() {
	 int size1, size2;
	 printf("Enter a  size of first array: ");
	 scanf("%d", &size1);
	 printf("Enter a size of second anrray: ");
	 scanf("%d", &size2);
	 int arr1[size1], arr2[size2],arr3[size1];
	 if (size1 == size2) {
		 printf("Enter a elements of array one: ");
		 for (int i = 0; i < size1; i++) {
			 scanf("%d", &arr1[i]);
		 }
		 printf("Enter a elements of array two: ");
		 for (int i = 0; i < size1; i++) {
			 scanf("%d", &arr2[i]);
		 }
	 }else{
		 printf("Array size is not same enter same size of array");
	 }
         for (int i = 0; i < size1; i++) {
		 arr3[i] = arr1[i] + arr2[i];
		 printf("%d	", arr3[i]);
	 }
 }

	 

