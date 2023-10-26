#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Fonction that copies a string.
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
