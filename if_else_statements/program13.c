
#include<stdio.h>
 void main() {
	 int pMoney ;
	 printf("Enter Your avaliable pocket amount: ");
	 scanf("%d", &pMoney);
	 if (pMoney >= 5000) {
		 printf("Happypola\n");
	 }else if(pMoney >= 3000) {
		 printf("CO2\n");
	 }else if(pMoney >= 1500) {
		 printf("Sarovar\n");
	 }else if(pMoney >= 750) {
		 printf("Vaishali") ;
	 }else{
		 printf("plane cancel");
	 }
 }


