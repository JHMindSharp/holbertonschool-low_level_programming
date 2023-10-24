#include <stdio.h>

/**
 * print_rev - Function that print a string in reverse.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
	if (s == NULL)
	{
		return;
	}

	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (int i = lenght - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
