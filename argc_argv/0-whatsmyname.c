#include <stdio.h>

/**
 *  main - That function prints the name of file.
 *
 *  @argc: The argument count.
 *  @argv: An array of strings containing command -line arguments.
 *
 *  Return: Always returns 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

