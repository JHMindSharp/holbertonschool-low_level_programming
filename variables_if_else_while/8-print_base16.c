
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * description: This is printing all the numbers of base 16 in lowercase.
 *
 * Return: (0) is the value.
 */
int main(void)
{
	int character;

	for (character = '9'; character >= '0'; character--)
	{
		putchar(character);
	}

	for (character = 'f'; character >= 'a'; character--)
	{
		putchar(character);
	}

	putchar('\n');


	return (0);
}
