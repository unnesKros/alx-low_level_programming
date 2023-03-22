#include "function_pointers.h"
/**
 * array_iterator - function that print array ints with other fun
 * @array: the input array
 * @size: the array size
 * @action: the function that use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
