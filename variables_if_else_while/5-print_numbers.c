
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * description: function that print all single digit
 *
 * Return: The (0) is the value.
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		printf("%d\n", number);

	return (0);
}

