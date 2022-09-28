#include<stdio.h>
 void fun(int,int);
 void main() {
	int x,y;
	printf("Enter a number: ");
	scanf("%d  %d",&x,&y);
	printf("%p\n", &x);
	printf("%p\n", &y);
	fun(x,y);
 }
void fun(int x ,int y) {
	printf("%d",x+y);
	printf("%p\n", &x);
	printf("%p\n", &y);
	printf("\n");
}


