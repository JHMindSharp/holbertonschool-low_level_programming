#include "main.h"
#include <limits.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert to an integer.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;
	int is_digit = 0;
	int digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			is_digit = 1;
			digit = s[i] - '0';

			if ((result > INT_MAX / 10) ||
					((result == INT_MAX / 10) && (digit > INT_MAX % 10)))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			result = (result * 10) + digit;
		}
		else if (is_digit)
			break;
		i++;
	}

	return (result * sign);
}

