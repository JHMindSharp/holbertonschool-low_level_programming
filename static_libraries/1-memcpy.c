#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p_dest = dest;
	char *p_src = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p_dest = *p_src;
		p_dest++;
		p_src++;
	}

	return (dest);
}

