#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;

	printf("The string Last digit of, followed by\n");
	printf("%d, followed by\n", n);
	printf("the string is, followed by\n");

	if (lastDigit > 5)
	{
		printf("Last digitgreater than 5: the string and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("if the last digit of n is 0: the string and is 0\n");
	}
	else
	{
		printf("the last di and not 0: the string and is less than 6 and not 0\n");
	}

	printf("followed by a new line\n");

	return (0);
}

