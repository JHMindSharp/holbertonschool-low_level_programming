
#include <stdio.h>

/**
 * main -  prints all single digit numbers of base 10 starting from 0.
 *
 * description:this is printing all digit of 10 starting from 0 .
 *
 * Return: (0) ins the value.
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
	}

	putchar('\n');


	return (0);
}
