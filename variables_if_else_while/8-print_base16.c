
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
	int number;

	for (number = 0; number < 16; number++)
	{
		if (number < 10)

			putchar('0' + number);

		else
			putchar('a' + (number - 10));
	}

	putchar('\n');


	return (0);
}
