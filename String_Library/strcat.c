#include<stdio.h>
#include<string.h>
 void main() {
	 char str1[20] = {'s','a','s','h','i','\0'};
	 char *str2 = "Bagal";
	 puts(str1);
	 puts(str2);
	 strcat(str1,str2);
	 puts(str1);
	 puts(str2);
 }

