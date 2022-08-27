
#include<stdio.h>
 void main() {
	 int a,b;
	 printf("Enter a start number: ");
	 scanf("%d", &a);
	 printf("Enter a end number: ");
	 scanf("%d", &b);

	 int i = a;
	 while(i <= b) {
		 if(4%i == 0 && 5%i == 0 ) {
			 printf("%d\n", i);
			 
		 }
		 i++;
		 
		// printf("%d\n", i);

	 }
 }

