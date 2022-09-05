

#include<stdio.h>
 void main() {

	 int a ;
	 printf("Enter a month : ");
	 scanf("%d",  &a );

	 switch(a) {
		 case 1:
			printf("Jan has 31 days\n");
		        break;
		 case 2:
			printf("feb has 28 days\n");
		        break;
		 case 3:
			printf("Mar has 30 days\n");
		        break;
		 case 4:
			printf("April has 31 days\n");
		        break;
		 case 5:
			printf("May has 30 days\n");
		        break;
		 case 6:
			printf("Jun has 31  days\n");
		        break;
		 case 7:
			printf("July has 30 days\n");
		        break;
		 case 8:
			printf("August has 31 days\n");
		        break;
		 case 9:
			printf("Sep has 30 days\n");
		        break;
		 case 10:
			printf("Oct has 31 days\n");
		        break;
		 case 11:
			printf("Nov has 30 days\n");
		        break;
		 case 12:
			printf("Dec has 31 days\n");
		        break;
		 default:
			printf("Enter a valid month");

		        break;
	 }
 }


		 	

