#include <stdio.h>
int main()
{	
	// integers have size of 4 bytes
	int n = 10;
	printf("Size of an integer: %lu\n", sizeof(n));
	// therefore the size of this array is 4 bytes times number of elements
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// This is 10 elements x 4 bytes = 40 bytes
	printf("Size of the array: %lu\n", sizeof(arr));
	// Should be 4 bytes as it is an integer
	printf("Size of one bound of the array: %lu\n", sizeof(arr[0]));
	// first element of the array
	printf("First element: %d\n", arr[0]);
	// 40 / 4 = 10 elements as proposed in the thesis
	printf("Number of elements: %lu\n", sizeof(arr) / sizeof(arr[0]));
}
