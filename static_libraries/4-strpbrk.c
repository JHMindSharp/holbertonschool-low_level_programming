#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: A pointer to the string to search.
 * @accept: A pointer to the string containing accepted characters.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = accept;

	while (*s)
	{
		while (*p)
		{
			if (*s == *p)
				return (s);
			p++;
		}

		p = accept;
		s++;
	}

	return (NULL);
}

