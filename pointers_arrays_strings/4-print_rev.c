#include <stdio.h>

/**
 * print_rev - Function that print a string in reverse.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}


	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
