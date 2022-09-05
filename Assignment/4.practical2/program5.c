/*
  Program 5:
WAP to print all even numbers in reverse order and odd numbers in the standard way.
Both separately. Within a range.
Input: start - 2
End - 9
Output:
8 6 4 2
3 5 7 9

*/

#include<stdio.h>
 void main() {
	 int a,b;
	 printf("Enter a start number: ");
	 scanf("%d", &a);
	 printf("Enter a end number: ");
	 scanf("%d", &b);

	 if( a<b) {


	 		for (int i = b; i >= a; i--) {
					if (i%2 == 0){
						printf("%d ",i);
					}
			}
			printf("\n");
			for (int i = a; i <= b; i++){
				if (i%2 != 0){
					printf("%d ",i);
				}
			}
			printf("\n");
	 
	 }else if ( a > b) {

		 for (int i = a; i >= b; i--) {
			 if ( i%2==0) {
				 printf("%d ", i);
			 }
		 }
		 printf("\n");
		 for (int i = b; i <= a; i++) {
			 if (i %2 != 0) {
				 printf("%d ", i);
			 }
		 }
		 printf("\n");
	 }
 }
	 
 

		 

									


