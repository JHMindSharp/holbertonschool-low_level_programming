#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Alloue un tableau à deux dimensions d'entiers
 * et l'initialise à 0.
 * @width: La largeur du tableau.
 * @height: La hauteur du tableau.
 *
 * Return: Retourne un pointeur vers le tableau à deux dimensions,
 * ou NULL en cas d'échec.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

