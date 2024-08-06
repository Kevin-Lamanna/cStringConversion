// CONVERTING MODULE SOURCE

#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80

#include "converting.h"

/* Version 2 */
// Converts numeric strings to double
void converting() {
	printf("*** Start of Converting Strings to double Demo ***\n");
	// User input numeric string
	char doubleString[BUFFER_SIZE] = { 0 };
	// Result of conversion str -> double
	double doubleNumber = 0;

	// Loop until q is entered
	do {
		// Get User Input
		printf("Type a double numeric string (q - to quit):\n");
		fgets(doubleString, BUFFER_SIZE, stdin);
		// Set the end of the C String to the null terminator
		doubleString[strlen(doubleString) - 1] = '\0';

		// if the input != q, convert and print the double
		if ((strcmp(doubleString, "q") != 0)) 
		{
			doubleNumber = atof(doubleString);
			printf("Converted number is %f\n", doubleNumber);
		}
	} while (strcmp(doubleString, "q") != 0);

	// End of Program
	printf("*** End of Converting Strings to double Demo ***\n\n");

}

