#include <stdio.h>


/**
 * main -  prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Description: This function iterates through
 * the lowercase alphabet ('a' to 'z')
 * and prints letter to the standard output, followed by a newline character.
 *
 * Return: (0) is the value
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
