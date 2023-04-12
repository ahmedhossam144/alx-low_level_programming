#include "main.h"		
#include <stdlib.h>
		
/**
 * alloc_grid - nested loop to make grid
 * @width: width 
 * @height: height 
 * Return: pointer 2 dimension array
 */
		
int **alloc_grid(int width, int height)
		
{
	int **poi;	
	int x, y;
		

	if (width <= 0 || height <= 0)
		return (NULL);
		
	poi = malloc(sizeof(int *) * height);
		
	if (poi == NULL)
		return (NULL);
		
	for (x = 0; x < height; x++)	
	{
		poi[x] = malloc(sizeof(int) * width);
		
		if (poi[x] == NULL)
		{
			for (; x >= 0; x--)
				free(poi[x]);
		
			free(poi);
			return (NULL);
		}
	}
		
	for (x = 0; x < height; x++)	
	{
		for (y = 0; y < width; y++)
			poi[x][y] = 0;
	}
			
	return (poi);
}
