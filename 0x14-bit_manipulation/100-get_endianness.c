#include "main.h"

/**
 * get_endianness -  function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int x = 1;

	x = *(char *)(&x) == 1;
	return (x);
}
