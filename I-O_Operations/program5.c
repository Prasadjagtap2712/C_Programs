
#include<stdio.h> 
 void main() {
	 int points;
	 printf("Enter Yours marks : ");
	 scanf("%d", &points);
	 printf("You enterd marks are: %d\n",points);
	 if (points >= 80 && points <= 100) {
		 printf("Grade O:Outstanding\n");
	 }
	 if (points >= 70 && points <= 79) {
		 printf("Grade A+:Excellent\n");
	 }
	 if (points >= 60 && points <= 69) {
		 printf("Grade A:Very Good\n");
	 }
	 if (points >= 55 && points <= 59) {
		 printf("Grade B+:Good\n");
	 }
	 if (points >= 50 && points <= 54) {
		 printf("Grade B:Above Average\n");
	 }
	 if (points >= 45 && points <= 49) {
		 printf("Grade C:Average\n");
	 }
	 if (points >= 40 && points <= 44) {
		 printf("Grade P:Pass\n");
	 }
	 if (points >= 0 && points <= 39) {
		 printf("Grade F:Fail\n");
	 }
	 if (points < 0) {
		 printf("Please Enter Valid marks\n");
	 }
	
 }

