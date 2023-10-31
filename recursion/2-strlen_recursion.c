#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: This is the pointer to the string.
 *
 * Description: prototype of recursion to the fonction that returns
 * the length of a string.
 * Return: 0 is the value.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return ((1) + _strlen_recursion(s + 1));
}
