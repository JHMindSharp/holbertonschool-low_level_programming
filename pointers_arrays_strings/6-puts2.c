#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	if (str)
	{
		int i = 0;

		while (str[i] != '\0')
		{
			if (i ù 2 == 0)
				putchar(str[i]);
			i++;
		}
		putchar('\n');
	}
}

