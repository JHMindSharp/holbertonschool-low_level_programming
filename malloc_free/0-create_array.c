#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Crée un tableau de caractères et l'initialise avec un
 * caractère spécifique.
 * @size: La taille du tableau à créer.
 * @c: Le caractère avec lequel initialiser le tableau.
 *
 * Return: Retourne un pointeur vers le tableau, ou NULL en cas d'échec.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

