#include<stdio.h>
 void CallByAddress(int*);
 void main() {
	 int x = 10;
	 printf("%d\n",x); //10
	 CallByAddress(&x);
	 printf("%d\n",x); //50

 }
 void CallByAddress(int *ptr) {
	 printf("%p\n", ptr);
	 printf("%d\n", *ptr);
	 *ptr = 50;
	 printf("%d\n",*ptr);
 }

