#ifndef INTEGER_INPUT_H
#define INTEGER_INPUT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define MAX_DIGITS 12

/*
:: Remove surplus characters form input buffer
:: Otherwise, if more than the permitted number of characters have been entered
:: :: during the call to fgets(), the surplus characters (after MAX_DIGITS chars)
:: :: remain in the input buffer and will be wrongly accepted as input on the
:: :: next iteration of the loop
-- Credits to David Egan https://dev-notes.eu/2019/05/Integer-Input-in-C/
*/

static inline void ClearInputBuffer()
{
	char c = 0;
	// Loop over input buffer and consume chars until buffer is empty
	while ((c = getchar()) != '\n' && c != EOF);
}

void getIntegerFromStdin(int *inputInteger)
{
	char *inputBuffer = malloc(sizeof(char) * MAX_DIGITS);
	memset(inputBuffer, 0, MAX_DIGITS);
	char *input = NULL;
	while (input == NULL) {
		// fgets returns inputBuffer on success
		// either free input 'input' or 'inputBuffer'
		// to avoid double-free error
		printf("Enter number of elements >> ");
		input = fgets(inputBuffer, MAX_DIGITS, stdin);

		// if fgets() receives less than MAX_DIGITS
		// the last char in the array is '\n'
		// therefore if last char is not '\n too many characters were entered
		if (inputBuffer[strlen(inputBuffer) - 1] != '\n') {
			printf(stderr, "[ERROR]: Too many characters: max input is %d chars.\n", MAX_DIGITS);
			ClearInputBuffer();
			input = NULL;
			continue;
		}

		// check that the input can be interpreted as an integer
		// convert to integer using 'strtol()''
		// input is the string input, endptr is the adress of the string part of
		// input and 10 is the base for the integer
		// the function strtol returns the integer part and saves the string part
		// in endptr
		errno = 0;
		char *endptr = NULL;
		*inputInteger = strtol(input, &endptr, 10);

		// if an integer was not found, endptr remains set to input
		// if there is no integer in the input
		// remove whitespace
		// print error
		// clear input buffer
		if (input == endptr) {
			// remove trailing newline by addin NUL at the index of the
			// terminating '\n' character
			// strcspn gets the length of a prefix substring
			input[strcspn(input, "\n")] = 0; // remove newline
			printf("Invalid input: no integer found in :: %s ::\n", input);
			input = NULL;
		}
		if (errno != 0) {
			printf(stderr, "[ERRORS]: That doesn't look like an integer.\n");
			input = NULL;
		}
	}
	free(inputBuffer);
}

#endif