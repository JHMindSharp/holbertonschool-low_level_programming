#include <stdio.h>

/**
 * print_rev - Function that print a string in reverse.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
	if (s == NULL)
	{
		return;
	}

	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (int i = lenght - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
/**
 * main - The function print str pointer.
 *
 * Return: 0 is the value.
 */
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);

	return (0);
}

