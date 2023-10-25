#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n elements of an array of integers
 * followed by a new line.
 * @a: Array of integers.
 * @n: Number of elements to print.
 */
void print_array(int *a, int n)
{
	if (a)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);

			if (i < n - 1)
			{
				printf(", ");
			}
		}

		printf("\n");
	}
}

