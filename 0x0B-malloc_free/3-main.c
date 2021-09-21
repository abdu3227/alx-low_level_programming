#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_grid - prints a grid of integr
 * @grid: the address of 2D grid
 * @height: the height of grid
 * @width: the width of grid
 *
 * Return: NOthing
 */
void print_grid(int **grid, int width, int height)
{
	int w, h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/**
 * main - checks the code
 *
 * Return: 0
 */
int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 98;
	grid[3][4] = 402;
	print_grid(grid, 6, 4);
	return (0);
}