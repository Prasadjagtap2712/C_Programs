
#include<stdio.h>
 void main() {
	 int time;
	 printf("Enter your Check-in Time: ");
	 scanf("%d", &time);
	 if (time >= 8 && time <= 9) {
		 printf("Give Warning");
	 }else{
		 printf("You are welcome");
	 }
 }


