
#include <stdio.h>


/**
 * main - prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * description: This is printing lowercase alphabet, printing uppsercase
 * alphabet and print a new line.
 *
 * Return: (0) is the value
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');


	return (0);
	}
