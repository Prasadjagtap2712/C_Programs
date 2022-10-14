#include<stdio.h>
#include<string.h>
 char *mystrcpy(char *dest, const char *src){
	while (*src != '\0') {
	       *dest = *src;
	       dest++;
	       src++;
	}
	*dest = '\0';
	return dest;
 }
void main() {
	char *src = "virat kohali";
	char dest[20];
	puts(src);
	puts(dest);
	
	
}
