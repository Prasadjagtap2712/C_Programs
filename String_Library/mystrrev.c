#include<stdio.h>
 char *mystrrev (char *str) {
	 char *temp = str;
	 while(*temp != '\0') {
		 temp++;
	 }
	 temp--;
	 char x;
	 while(str < temp) {
		 x = *str;
		 *str = *temp;
		 *temp = x;
	 }
	 return str;
 }
void main() {
	char str[10] = "kanha";
	mystrrev(str);
	puts(str);
}

