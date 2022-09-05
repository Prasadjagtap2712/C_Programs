
/* Pyhtogoras triplet or not */

#include<stdio.h> 
 void main() {

	 int a, b, c;
	 printf("Enter a 1st side: ");
	 scanf("%d", &a);
	 printf("Enter a 2nd side: ");
	 scanf("%d", &b);
	 printf("Enter a 3rd side: ");
	 scanf("%d", &c);

	if ( c*c == a*a + b*b) {
		printf("The given sides are pythagoras triplet\n");
	}else{
		printf("The given sides are not pythagoras triplet\n");
	}
 }


		 
