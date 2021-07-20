#include <stdio.h>
#include <string.h>

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int n = 10;
	int arr[n];

	// fill array with zeros
	memset(arr, , n * sizeof(arr[0]));
	// memset doesn't set array value to integers
	// other than 0 or -1 as this values are all 0s or all 1s
	// as it works with characters and integers contain 
	// 4 bytes vs chars that contain 1 byte
	//memset(arr, 420, n * sizeof(arr[0]));
	printf("Array after memset() :: ");
	printArray(arr, n);

	return 0;
}