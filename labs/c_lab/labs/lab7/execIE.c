#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	char *argsChild[] = {"./binTestChild", NULL};
	//exec child as fork returns 0 on the child
	if (fork() == 0) {
		execvp(argsChild[0], argsChild);
	}
	// wait for child to finish
	wait(NULL);

	char *argsParent[] = {"./binTestParent", NULL};
	execvp(argsParent[0], argsParent);;
	// This part does't execute as the parent process 
	// is replaced by the execution of the binary file
	printf("I am the parent here!\n");
	return 0;
}
