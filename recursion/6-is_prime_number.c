#include "main.h"

/**
 * is_prime_recursive - Determines if a number is
 * prime using recursion.
 * @n: The number to check for primality.
 * @i: The divisor to test.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, i - 1));
}

/**
 * is_prime_number - Determines if a number is prime using recursion.
 * @n: The number to check for primality.
 *
 * Return: 1 if 'n' is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}

