#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number.
 * @n: the given number.
 *
 * Return: The factorial of the number, or -1 for an error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

