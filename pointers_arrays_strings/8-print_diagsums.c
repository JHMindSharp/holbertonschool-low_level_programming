#include <stdio.h>

/**
 * print_diagsums - Print the sums of the diagonals of a square matrix
 * @a: The pointer to the square matrix
 * @size: The size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += *(a + i * size + i);
		diag2 += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d\n", diag1, diag2);
}

