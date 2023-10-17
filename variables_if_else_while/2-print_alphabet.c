#include <stdio.h>
/**
 * Prints the alphabet in lowercase.
 *
 * This function prints the lowercase alphabet from 'a' to 'z'
 */

void PrintsAlphabetInLowercase(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)


		putchar(letter);

	putchar('\n');
}

/**
 * The main function void.
 *
 * This is the entry point of the program. It calls the
 * PrintsAlphabetInLowercase function and returns 0.
 *
 * @return 0 indicating successful program execution.
 */
	int main(void)
{
		PrintsAlphabetInLowercase();
		return (0);
	}
