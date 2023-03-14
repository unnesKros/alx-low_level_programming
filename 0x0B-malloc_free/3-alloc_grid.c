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

	ar = malloc(width * sizeof(*ar));

	if (ar == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		ar[i] = malloc(height * sizeof(**ar));
		if (ar[i] == NULL)
			return (NULL);

		for (j = 0; j < height; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
