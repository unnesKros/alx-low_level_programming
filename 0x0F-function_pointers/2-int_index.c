#include "function_pointers.h"

/**
 * int_index - function that return index of int in array
 * @array: array of integers
 * @size: the size of the array
 * @cmp: the function to compare with
 * Return: the index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	else if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}

		return (-1);
	}
}
