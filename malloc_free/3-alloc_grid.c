#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - returns a pointer to a 2 dimensional array of integers
*@width: The width of the array
*@height: The height of the array
*Return: a pointer to the allocated space
*/

int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

/*Validation des paramètres*/
if (width <= 0 || height <= 0)
{
	return (NULL);
}
/*Allocation de mémoire*/
grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

for (i = 0; i < height; i++)
{
	grid[i] = (int *)malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
		return (NULL);
	}

/*Initialisation à 0*/
for (j = 0; j < width; j++)
{
	grid[i][j] = 0;
}
}

/*Retour de la matrice*/
return (grid);
}
