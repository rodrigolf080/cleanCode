#include<stdio.h> 
int main() 
{ 
	// array bonderies work as follow
	// when you have a pointer to array a
	// you can move though elements by pointing to different
	// memory addresses of the bond array
	// making it easy to move out of the array bonderies as well
    int a[2] = {1, 2}; 
    void *ptr = &a; 
    ptr = ptr + sizeof(int); 
    printf("%d\n", *(int *)ptr); 
    return 0; 
} 

