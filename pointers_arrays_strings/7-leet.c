#include "main.h"

/**
 * leet - Encode a string to 1337 (leet) speak
 * @str: The string to encode
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	char *leet_str = str;
	char leet_replace[11] = "aAeEoOtTlL";
	char leet_replace_with[11] = "443370711";
	int i, j;

	while (*str)
	{
		i = 0;
		j = 0;
		while (leet_replace[i])
		{
			if (*str == leet_replace[i])
			{
				*str = leet_replace_with[i];
				break;
			}
			i++;
		}
		str++;
	}

	return (leet_str);
}

