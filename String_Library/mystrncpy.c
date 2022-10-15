#include<stdio.h>
char * mystrncpy (char *dest, char *src, int n) {
	while(n != 0 && *src != '\0') {
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return dest;
}
void main() {
	char *name = "Rahul pitche";
	char str[15];
	int n = 5;
	puts(name);
	mystrncpy(str,name,n);
	puts(str);
}

