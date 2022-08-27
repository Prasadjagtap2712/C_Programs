
/* according to month print the days in month*/

#include<stdio.h>
 void main() {
	 int a;
	 printf("Enter a month: ");
	 scanf("%d", &a);
	 if (a == 1) {
		 printf("jan has 31 days\n");
	 } else if (a == 2) {
		 printf("Feb has 28 days\n");
	 } else if (a == 3) {
		 printf("Mar has 31 days\n");
	 } else if (a == 4) {
		 printf("Apri has 30 days\n");
	 } else if (a == 5) {
		 printf("May has 31 days\n");
	 } else if (a == 6) {
		 printf("Jun has 30 days\n");
	 } else if (a == 7) {
		 printf("july has 31 days\n");
	 } else if (a == 8) {
		 printf("August has 30 days\n");
	 } else if (a == 9) {
		 printf("September has 31 days\n");
	 } else if (a == 10) {
		 printf("Oct has 30 days\n");
	 } else if (a == 11) {
		 printf("Nov has 31 days\n");
	 } else if (a == 12) {
		 printf("Dec has 30 days\n");
	 } else {
		 printf("please enter a valid month\n");
	 }
 }

