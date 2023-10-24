#include <stdio.h>

/**
 * print_rev - Function that print a string in reverse.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
	for (int i = str - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
