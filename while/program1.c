
#include<stdio.h> 
 void main() {
	 int a,b;
	 printf("Enter a start number: ");
	 scanf("%d", &a);
	 printf("Enter a end number: ");
	 scanf("%d", &b);

	 for (int i = a; i <= b; i++ ) {
		 printf("%d\n", i*i);
	 }
 }

