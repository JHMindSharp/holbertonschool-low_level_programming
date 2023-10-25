#include "main.h"

/**
 * _strcpy - copie the string pointer by a src, including
 * the terminating null byte (\0), to the buffer pointed by dest
 * @dest: The destination tmp.
 * @src: The main string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

