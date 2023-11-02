#include <stdio.h>

/**
 *  My_name_is - That function prints the name of file.
 *  @argc: The value will be checked.
 *  @argv: The name of the file.
 *
 *  return: return everytime 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

