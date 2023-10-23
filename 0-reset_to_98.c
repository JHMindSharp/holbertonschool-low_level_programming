#include <stdio.h>
/**
 * reset_to_98 - function that takes a pointer to an int as
 * parameter and updates the value it points to to 98.
 *
 * description: This function that takes a pointer to an int
 * as parameter and updates the value it points to to 98.
 * @n : pointing an int value must be changed.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

/**
 * main - function that print the value pointed.
 *
 * description: This function will print the value.
 *
 * Return: (0) is the value.
 */
int main(void)
{
	int n = 402;

	printf("n=%d\n", n);

	reset_to_98(&n);

	printf("n=%d\n", n);

	return (0);
}
