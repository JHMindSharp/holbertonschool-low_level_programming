#include "main.h"

/**
 * main - checks for alphabetic character.
 *
 * description: check for alphabetic character.
 *
 * Return: everytime (0).
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha('l');
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

