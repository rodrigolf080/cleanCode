#include <stdio.h>
#include <stdlib.h>

int main() 
{
	// Storing str1 in stack segment like other auto variables
	char c1;
	printf("\nstr1: ");
	char str1[] = "king";
	printf("%s\n", str1);
	printf("Enter a character for str1: ");
	c1 = getchar();
	*(str1+0) = c1;
	printf("Updated to: %s\n", str1);

	// Catch newline
	char *grb = (char *)malloc(sizeof(char));
	*grb = getchar();
	free(grb);

	// Storing str2 in heap segment with dynamic memory allocation
	printf("\nstr2: ");
	char c2;
	int size = 5;
	char *str2 = (char *)malloc(sizeof(char)*size);
	*(str2+0) = 'q';
	*(str2+1) = 'u';
	*(str2+2) = 'e';
	*(str2+3) = 'e';
	*(str2+4) = 'n';
	*(str2+5) = '\0'; // string terminator
	printf("%s\n", str2);
	printf("Enter a character for str2: ");
	c2 = getchar();
	*(str2+0) = c2;
	printf("Updated to: %s\n", str2);

	// Catch newline
	//char *grb = (char *)malloc(sizeof(char));
	*grb = getchar();
	free(grb);

	// Storing str1 in stack segment like other auto variables
	char c3;
	printf("\nstr3: ");
	char str3[] = "wolf";
	printf("%s\n", str3);
	printf("Enter a character for str3: ");
	c3 = getchar();
	*(str3+0) = c3;
	printf("Updated to: %s\n\n", str3);

}