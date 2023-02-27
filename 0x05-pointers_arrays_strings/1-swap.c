#include "main.h"

/**
 * swap_int - Swaps the values of two intgers
 * description : Write a function that swaps the values of two integers.
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

