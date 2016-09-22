/**
 * This code is in the Public Domain.  Feel free to modify and distribute at
 * will.
**/

#include <stdio.h> // For using printf()
#include <string.h> // For using strlen()
#include <stdint.h> // For using int8_t, uint8_t etc variable types.

// Main function.
int main(int argc, char *argv[]) {
	char name[20];

	printf("\"goodbye cruel world\" - Kim\n");
	printf("Before I die... What's your name?\n");
	printf("Your name is?: ");
	scanf("%20s", name);
	printf("See you in another life %s!\n", name);
	// Return 0 on success.
	return 0;
}
