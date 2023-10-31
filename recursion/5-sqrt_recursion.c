#include "main.h"


int _sqrt_recursion_helper(int n, int i);

/**
 * _sqrt_recursion - Function that returns
 * the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Description: This function uses a recursive approach to find
 * the natural square root
 * of a given non-negative integer. It calls the _sqrt_recursion_helper
 * function to implement the recursive search.
 *
 * Return: The square root if it's an
 * integer, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}

	return (_sqrt_recursion_helper(n, 1));
}
/**
 * _sqrt_recursion_helper - Helper function to find the natural square root.
 * @n: The number for which to find the square root.
 * @i: The current guess for the square root.
 *
 * Description:
 * This function is a recursive helper used by _sqrt_recursion to implement
 * the search for the natural square root of a non-negative integer. It
 * iteratively tests different values for the square root and returns the
 * correct value or -1 if no natural square root is found.
 *
 * Return:
 * The natural square root of the integer if it's a perfect square, or -1 if
 * there's no natural square root.
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_recursion_helper(n, i + 1));
}

