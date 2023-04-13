#include <stdlib.h>
#include "main.h"
/**
 * free_grid -  function that frees grid previously created
 * @grid: grid to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
