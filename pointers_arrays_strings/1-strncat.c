#include "main.h"


/**
 * _strncat - Concatenate two strings, using at most n bytes
 * @dest: The destination string
 * @src: The source string
 * @n:The maximum number of bytes from src to use
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (ptr);
}

