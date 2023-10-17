#include <stdio.h>


/**
 * PrintsAlphabetInLowercase -  prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Description: This function iterates through
 * the lowercase alphabet ('a' to 'z')
 * and prints letter to the standard output, followed by a newline character.
 */
void PrintsAlphabetInLowercase(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)


		putchar(letter);

	putchar('\n');
}

/**
 * main - prints the alphabet in lowercase.
 *
 * Description: This is the entry point of the program.
 * function to print the alphabet in lowercase and returns 0 to indicate
 * successful execution.
 *
 * Return: (0) indicating successful program execution.
 */
	int main(void)
{
		PrintsAlphabetInLowercase();
		return (0);
	}
