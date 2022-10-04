#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously
 *			created by the alloc_grid function
 * @grid: The memory block I want to free
 * @height: The height of the block
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		_putchar('O');
		_putchar('K');
		_putchar('\n');
	}
	while (height >= 0)
	{
		free(grid[height]);
		height--;
	}
	free(grid);
}
