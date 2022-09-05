
/* wap to check leap year or not */

#include<stdio.h> 
 void main() {

	 int a;
	 printf("Enter a year : ");
	 scanf("%d", &a);

         if(a > 0){

	   	if (a%4 == 0 ) {
		     printf("leap year\n");
	        }else {
		     printf("not  a leap year\n");
		}
	 }else {
		 printf("Enter a valid year\n");
	 }
 }

	 
 

