#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number, calculates its last digit,
 * and prints different messages based on the value of the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("The string Last digit of, followed by\n");
	printf("%d, followed by\n", n);
	printf("the string is, followed by\n");

	int lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Greater than 5: greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("if the last digit of n is 0: the string and is 0\n");
	}
	else
	{
		printf("Less than 6 and not 0: less than 6 and not 0\n");
	}

	printf("followed by a new line\n");

	return (0);
}

