#include "main.h"

/**
 * _atoi - Converta string to an integer.
 * @s: The string to convert in integers.
 *
 * Return: The value int convert.
 */
int _atoi(char *s)
{
	long sign = 1;
	long result = 0;
	int i = 0;
	int is_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			is_digit = 1;
			result = (result * 10) + (s[i] - '0');
		}
		else if (is_digit)
			break;
		i++;
	}

	return (result * sign);
}

