#include<stdio.h>
 char * mystrlwr(char *str) {
	 while(*str != '\0') {
		 if (*str >= 'A' && *str <= 'Z') {
			 *str = *str + 32;
		 }
		 str++;
	 }
	 return str;
 }
void main() {
	char str[10] = {'P','r','A','s','A','d','\0'};
	puts(str);
	mystrlwr(str);
	puts(str);
}

