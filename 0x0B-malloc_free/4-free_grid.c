#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2D grid
 * @g: grid
 * @h: height
 *
 * Return: nothing
 */
void free_grid(int **g, int h)
{
	int i = 0;

	while (i < h)
	{
		free(g[i]);
		i++;
	}
	free(g);
}
