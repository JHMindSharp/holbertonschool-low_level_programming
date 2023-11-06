#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Libère un tableau à deux dimensions alloué
 * précédemment par alloc_grid.
 * @grid: Le pointeur vers le tableau à deux dimensions.
 * @height: La hauteur du tableau.
 *
 * Return: Aucun.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

