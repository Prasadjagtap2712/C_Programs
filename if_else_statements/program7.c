
#include<stdio.h>
 void main() {
	 int x = 1;
	 if(--x) {
		 printf("In first block\n");
	 }
	 if (++x || x--) {

		 printf("In second block\n");
	 }
	 printf("%d\n",x);
	 printf("End Code\n");
 }


