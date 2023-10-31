#include "main.h"

/**
 * _sqrt_recursion - Function that returns the naturlal
 * square root of a number.
 * @n:
 *
 * Return: i is the square root of the number when there
 * is no square it s returning -1.
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n == 0)
	{
		return (0);
	}
	for (i = 1; i <= n; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
	}

	return (-1);
}
