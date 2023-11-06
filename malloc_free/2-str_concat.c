#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatène deux chaînes de caractères.
 * @s1: La première chaîne.
 * @s2: La deuxième chaîne à concaténer à la première.
 *
 * Return: Retourne un pointeur vers la nouvelle chaîne
 * concaténée, ou NULL en cas d'échec.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len_s1 = 0, len_s2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;

	concatenated = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < len_s2; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}

