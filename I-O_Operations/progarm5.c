
#include<stdio.h>
 void main() {
	 int x;
	 printf("Enter a Salary: \n");
	 scanf("%d",&x);
	 printf("Your Salary is :%d\n",x);
	 if (x >= 0 && x <= 500000) {
		 printf("You have 0 per TAX \n");
	 }
	 if (x >= 501000 && x <= 1000000) {
		 printf("You have 5 per TAX \n");
	 }
	 if (x >= 1001000 && x <= 1500000) {
		 printf("You have 10 per TAX \n");
	 }
	 if (x >= 1501000 && x <= 2000000) {
		 printf("You have 15 per TAX \n");
	 }
	 if (x >= 2001000 ) {
		 printf("You have 20 per TAX \n");
	 }
	 
 }
