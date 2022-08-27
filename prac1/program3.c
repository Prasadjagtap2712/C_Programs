 /* maximum b\w three numbers */
#include<stdio.h> 
 void main() {
	 int a ,b, c;
	 printf("Enter a 1st number: ");
	 scanf("%d", &a);
	 printf("Enter a 2nd number: ");
	 scanf("%d", &b);
	 printf("Enter a 3rd number: ");
	 scanf("%d", &c);

	 if (a < b && a < c) {
		 printf("minimum number is %d\n", a);
	 }else if( b < a && b < c) {
		 printf("minimum number is %d\n", b);
	 }else if( c < a && c < b) {
		 printf("Minimum number is %d\n ", c);
	 }
 }



