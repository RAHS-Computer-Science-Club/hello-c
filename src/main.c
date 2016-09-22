/**
 * This code is in the Public Domain.  Feel free to modify and distribute at
 * will.
**/

#include <stdio.h> // For using printf()
#include <string.h> // For using strlen()
#include <stdint.h> // For using int8_t, uint8_t etc variable types.

// Main function.
int main(int argc, char *argv[]) {
	// Variable to store character name in.
	char name[20];

	// Print some text
	printf("\"goodbye cruel world\" - Kim\n");
	printf("Before I die... What's your name?\n");
	printf("Your name is?: ");
	// Read at most 20 characters for name
	scanf("%20s", name);
	// Final text print
	printf("See you in another life %s!\n", name);
	// Return 0 on success.
	return 0;
}
