#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - return pointer 2D array of int
 * @w: width
 * @h: hight
 * Return: ptr
 */
int **alloc_grid(int w, int h)
{
	int **g, i, j;

	i = j = 0;
	if (w <= 0 || h <= 0)
		return (NULL);
	g = malloc(h * sizeof(*g));
	if (g == NULL)
	{
		free(g);
		return (NULL);
	}
	while (i < h)
	{
		g[i] = malloc(w * sizeof(**g));
		if (g[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(g[i]);
				i--;
			}
			free(g);
			return (NULL);
		}
		while (j < w)
		{
			g[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	return (g);
}
