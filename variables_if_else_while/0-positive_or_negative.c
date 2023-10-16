#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This is the main function for the positive_or_negative program.
 * It generates a random number, checks if;and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Le nombre est %d\n", n);

	if (n > 0)
	{
		printf("est positif\n");
	}
	else if (n == 0)
	{
		printf("est zéro\n");
	}
	else
	{
		printf("est négatif\n");
	}

	return (0);
}

