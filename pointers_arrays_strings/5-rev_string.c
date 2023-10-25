#include "main.h"

/**
 * rev_string - Reverses a string in-place.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	if (s)
	{
		int length = 0;
		char *start = s;
		char *end = s;

		while (*end)
		{
			end++;
			length++;
		}

		end--;
		while (start < end)
		{

			char temp = *start;
			*start = *end;
			*end = temp;

			start++;
			end--;
		}
	}
}

