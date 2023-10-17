
#include <stdio.h>

/**
 * main - that prints the lowercase alphabet in reverse
 *
 * description: This is printing the lowercase alphabet in reverse.
 *
 * Return: (0) is the value
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}

