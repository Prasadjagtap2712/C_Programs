#include<stdio.h>
#include<string.h>
 void main() {
	 char *str1 = "shashi";
	 char *str2 = "shashi";
	 int diff = strcmp(str1,str2);
	 printf("%d\n",diff);
	 if (diff == 0){
		 printf("String are equal\n");
	 }else{
		 printf("String are not equal\n");
	 }
 }

