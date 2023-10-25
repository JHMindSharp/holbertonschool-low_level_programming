#include "main.h"
#include <stdio.h>

/**
 * puts_half - Imprime la moitié d'une chaîne, suivie d'une nouvelle ligne.
 * @str: La chaîne à imprimer.
 */
void puts_half(char *str)
{
	if (str)
	{
		int length = 0;
		int start_index;
		int i;

		while (str[length] != '\0')
		{
			length++;
		}

		start_index = (length + 1) / 2;

		for (i = start_index; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}

		putchar('\n');
	}
}

