#include "main.h"
/**
 * _puts_recursion - This function call recursivly for the rest
 * of the string.
 * @s: pointer to the string.
 * description: function that prints a string, followed by a new line.
 *
 * return: return nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
