
#include<stdio.h>
 void main() {
	 int a,b ,c ;
	 printf("Enter a 1st angle: ");
	 scanf("%d", &a);
	 printf("Enter a 2nd angle: ");
	 scanf("%d", &b);
	 printf("Enter a 3rd angle: ");
	 scanf("%d", &c);

	 if(a + b + c == 180) {
		 printf("Enter angles are sides of triangle\n");
	 }else{
		 printf("Enter angles are not sides of triangle\n");
	 }
 }


