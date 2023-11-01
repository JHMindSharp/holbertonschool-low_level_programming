#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring.
 * @haystack: A pointer to the string to search in.
 * @needle: A pointer to the substring to search for.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	while (*haystack)
	{
		p1 = haystack;
		p2 = needle;

		while (*p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}

		if (*p2 == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

