#include<stdio.h>
 char * mystrupr(char *str) {
	 while(*str != '\0') {
		 if(*str >= 'a' && *str <= 'z') {
			 *str = *str - 32;
		 }
		 str++;
	 }
	 return str;
 }
void main() {
	char str[20] = {'P','r','A','s','A','d','\0'};
	puts(str);
	mystrupr(str);
	puts(str);
}

