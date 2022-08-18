
#include<stdio.h>
 void main() {
	 char ch ;
	 printf("Are You Alive\n");
	 printf("Enter y or n \n");
	 scanf("%c", &ch);
	 if (ch == 'Y' || ch == 'y'){
	 		printf("Nice\n");
	 }else{
		 printf("User Died\n");
	 }
 }


