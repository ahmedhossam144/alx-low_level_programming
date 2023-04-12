#include <stdio.h>
#include <stdlib.h>
#include "main.h"
		
/**
 * free_grid - frees 2d arr
 * @grid: 2dim grid
 * @height: height of grid
 * Description: frees memory of grid
 * Return: void
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
