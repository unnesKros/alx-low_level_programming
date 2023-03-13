#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - function return an array
 * @size: the size of the array
 * @c: inisialized character in the array
 * Return: an array
 */



char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		a[i] = c;
	return (ar);
}
