/*
2. WAP to calculate the count of even and odd elements
Take array size and array elements from the user
IP : enter array : 10 12 13 15 16 17 19 20 22 23
OP: even element count is
OP: odd element count is
*/
#include<stdio.h>
 void main() {
	 int size, even=0,odd=0;
	 printf("Enter a number of array elements: ");
	 scanf("%d", &size);
	 int arr[size];
	 printf("Enter a array elements: ");
	 for (int i = 0; i < size; i++) {
		 scanf("%d", &arr[i]);
	 }
	 for (int i = 0; i < size; i++) {
		 
		 if (arr[i] % 2 == 0){
			 even = even + 1;
		 }else{
			 odd = odd + 1;
		 }
	 }
printf("Count of odd numbers present in array is: %d\n", odd);
printf("Count of even numbers present in array is: %d\n", even);
 }

