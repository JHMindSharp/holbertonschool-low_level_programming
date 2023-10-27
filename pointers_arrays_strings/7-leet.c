#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string to be encoded.
 * 
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
       	char leet_map[10] = {'O', 'L', 0, 0, 'E', 0, 0, 'T', 'A', 0};
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_map[j] || str[i] == leet_map[j] + 32)
			{
				str[i] = '0' + j;
				break;
			}
		}
	}

	return (str);
}

