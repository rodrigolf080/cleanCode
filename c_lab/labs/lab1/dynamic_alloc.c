#include <stdio.h> 
#include <stdlib.h> 
#include "integer_input.h"
  
int main(void) 
{ 
  
    // This pointer will hold the 
    // base address of the block created 
    // Pointers default to void
    int* ptr;
    int* ptr1; 
    int n, i;
    int flag = 1;
  
    // Get the number of elements for the array 
    //n = 5;
    getIntegerFromStdin(&n);

    // Dynamic memory allocation
    // Fills array elements with 0
    // If space is insufficient, allocation should fail and return NULL pointer
    // Or the compiller takes care of it when we call a loop like the for loop

    // Dynamically allocate memory using malloc() 
    ptr = (int*)malloc(n * sizeof(int));
    printf("Default values for malloc: "); 
        for (i = 0; i < n; i++) { 
            printf("%d", ptr[i]);
            if (i < n - 1) printf(", ");
        } 
    printf("\n");
    // Dynamically allocate memory using calloc() 
    ptr1 = (int*)calloc(n/2, sizeof(int));
    printf("Default values for calloc: "); 
        for (i = 0; i < n/2; i++) { 
            printf("%d", ptr1[i]);
            if (i < n/2 - 1) printf(", ");
        } 
    printf("\n");

    // Dynamically reallocate memory using realloc()
    ptr1 = realloc(ptr1, 2*n * sizeof(int));
    printf("Default values for realloc: "); 
        for (i = 0; i < 2*n; i++) { 
            printf("%d", ptr1[i]);
            if (i < 2*n - 1) printf(", ");
        }
    printf("\n");
    // Free pointer
    free(ptr1);
  
    // Check if the memory has been successfully 
    // allocated by malloc or not 
    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
  
        // Memory has been successfully allocated 
        printf("Memory successfully allocated.\n"); 
  
        // Get the elements of the array 
        for (i = 0; i < n; i++) {
            ptr[i] = i + 1; 
        } 
  
        // Print the elements of the array 
        printf("The elements of the array are: "); 
        for (i = 0; i < n; i++) { 
            printf("%d", ptr[i]);
            if (i < n - 1) printf(", ");
        } 
        printf("\n");
    } 
    
    // Free the memory previously allocated
    free(ptr);
    printf("Memory successfully freed.\n");
    return 0; 
} 
