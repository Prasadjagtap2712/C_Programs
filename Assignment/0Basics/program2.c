/*
Program 2: WAP print the value of the below expressions.
x =9 ;
ans = ++x + x++ + ++x
Print ans value and print x
ans1= ++x + ++x + ++x + ++x
Print ans1 value and print x
ans2 = x++ + x++ + ++x + x++ + ++x
Print ans2 value and print x
ans3 = x++ + x++ + x++ + x++
Print ans3 value and print x
*/

#include<stdio.h>
 void main() {
	 int ans = 0;
	 int ans1 = 0;
	 int ans2 = 0;
	 int ans3 = 0;
	 int x = 9;
	  
	 ans = ++x + x++ + ++x ;
	 printf("%d\n",ans);
	 printf("%d\n",x);
	 ans1 = ++x + ++x + ++x + ++x ;
	 printf("%d\n",ans1);
	 printf("%d\n",x);
	 ans2 = x++ + x++ + ++x + x++ + ++x ;
	 printf("%d\n",ans2);
	 printf("%d\n",x);
	 ans3 = x++ + x++ + x++ + x++  ;
	 printf("%d\n",ans3);
	 printf("%d\n",x);
 }


