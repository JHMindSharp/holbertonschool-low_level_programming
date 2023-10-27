#include "main.h"

/**
 * _memset - Remplit la mémoire avec un octet constant.
 * @s: Le pointeur vers la mémoire à remplir.
 * @b: L'octet constant pour remplir la mémoire.
 * @n: Le nombre d'octets à remplir.
 * 
 * Return: Un pointeur vers la mémoire remplie.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

