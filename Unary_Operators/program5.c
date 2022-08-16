
#include<stdio.h>
void main() {
	int x = 10;
	int output ;
	printf("%d\n",x); // 10
	printf("%d\n",output);  //0

	output = x++;  // 
	printf("%d\n",x); // 11
	printf("%d\n",output);  //10
}
