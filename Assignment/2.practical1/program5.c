#include<stdio.h>
 void main()  {
	 int a ;
	 printf("Enter a number between 0 and 5: ");
	 scanf("%d", &a);

	 switch(a) {
		 case 1:
			 printf("one\n");
			 break;
		 case 2:
			 printf("Two\n");
			 break;
		 case 3:
			 printf("Three\n");
			 break;
		 case 4:
			 printf("Four\n");
			 break;
		 case 5:
			 printf("Five\n");
			 break;
		default:
		 	printf("Please enter a valid number\n");
	       		break;
	 }
 }



