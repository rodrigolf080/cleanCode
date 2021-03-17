#include <stdio.h>

int main()
{
	int a = 10;
	// new void pointer to memory adress of a
	void *ptr = &a;
	// cast void pointer to integer to get
	// dereference void pointer to get value of a
	printf("%d\n", *(int *)ptr);
	
	// if you try to get the value of a from ptr without
	// integer casting it will not work as void pointers
	// exist to hold memory addresses, not integers
	//printf("%d\n", *ptr);

	return 0;
}
