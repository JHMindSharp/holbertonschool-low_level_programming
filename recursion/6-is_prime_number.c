#include "main.h"

/**
 * is_prime_number - Function that returns 1 if the input
 * integer is a prime number,
 * otherwise return 0.
 * @n: The source value.
 *
 * Return: When return 0, the value is not a primal number and
 * when return 1 it is.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	for (i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return (0);
		}
	}
	return (1);
}
