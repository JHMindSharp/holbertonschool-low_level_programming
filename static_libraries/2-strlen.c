#include <stdio.h>

/**
 * _strlen - Function that returns the length of a string.
 * @s: Pointer strings of char.
 *
 * Return: The size of the strings.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

