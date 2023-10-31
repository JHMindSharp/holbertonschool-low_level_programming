#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: pointer to the string
 *
 * description: prototype for printing a string in reverse.
 * return: return nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
