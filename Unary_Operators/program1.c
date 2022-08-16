
#include<stdio.h> 
int x = 10;
void fun() { 
	int y = 20;
	int ans;

	ans = ++x + ++y;  // 11 + 21
	printf("%d\n",ans);  //32
//	printf("%d\n",y);  //21

}

void main() {
	printf("In main \n");
	fun();
	printf("%d\n",x);
	printf("end main\n");


}



