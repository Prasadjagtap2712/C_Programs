
#include<stdio.h>
 void main() {
	 int pMoney;
	 printf("Enter your pocket money amount: ");
	 scanf("%d", &pMoney);
	 if (pMoney >= 10000) {
		 printf("GOA\n");
	 }else if (pMoney >= 5000) {
		 printf("Mumbai");
	 }else if (pMoney >= 2500) {
		 printf("Vai");
	 }else if (pMoney >= 1250) {
		 printf("Sinhagad");
	 }else {
		 printf("Gari Basayche");
	 }
 }
	 
	 
