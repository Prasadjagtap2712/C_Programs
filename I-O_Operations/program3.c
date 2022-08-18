
#include<stdio.h>
 void main() {
	 char ch ;
	 printf("Enter character: \n");
	 scanf("%c",&ch);
	 printf("%c\n",ch);
	 if(ch >= 'a' && ch <= 'z') {
		 printf("The character is lower case\n");
	 }
	 else {
		 printf("The character is Upper case\n");
	 }

 }

