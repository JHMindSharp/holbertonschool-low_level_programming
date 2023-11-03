#include <stdio.h>

/**
 * main - This program prints the number of arguments passed into it.
 *
 * @argc: The argument count.
 * @argv: An array of strings containing command-line arguments.
 *
 * Return: Always returns 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

