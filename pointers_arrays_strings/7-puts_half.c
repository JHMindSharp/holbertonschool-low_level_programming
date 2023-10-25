#include "main.h"

/**
 * puts_half - Imprime la moitié d'une chaîne, suivie d'une nouvelle ligne.
 * @str: La chaîne à imprimer.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	if (str)
	{

		while (str[length] != '\0')
		{
			length++;
		}

		int start_index = (length + 1) / 2;

		for (i = start_index; str[i] != '\0'; i++)
		{
		       putchar(str[i]);
		}

		putchar('\n');
	}
}

