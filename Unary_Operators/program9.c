
#include<stdio.h>
int x = 10;
 void fun() {

	 int y = 20;
	 int ans;

	 ans = ++x + ++x;
	 printf("%d\n",ans); // 23
	 printf("%d\n",x); //12
 }
void main() {
	fun();

}


