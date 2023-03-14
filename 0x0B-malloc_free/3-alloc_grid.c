#include "main.h"
#include "stdlib.h"

/**
 * alloc_grid - function that t returns a pointer to a 2 dimensional array of
 * intgers.
 * @width: the width of the array
 * @height: the height of the array
 * Return: the array
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	ar = malloc(height * sizeof(int *));

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);

			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
