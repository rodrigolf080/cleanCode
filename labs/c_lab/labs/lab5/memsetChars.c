#include <stdio.h>
#include <string.h>

int main()
{
	char str[50] = "vote trevalkov for king!";
	printf("\nBefore memset(): %s\n", str);
	// Fill 10 characters starting from str[14] with '.'
	memset(str + 14, '.', 10*sizeof(char));
	printf("After memset(): %s\n\n", str);
	
	return 0;
}