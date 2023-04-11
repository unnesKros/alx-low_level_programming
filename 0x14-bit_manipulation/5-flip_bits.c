#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: oh baby how I' suppose to know
 * @m: I must confess that I still believe
 * Return: hit me baby one more time
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int time = 0;
	unsigned long int sign = n ^ m;

	while (sign)
	{
		time += (sign & 1);
		sign >>= 1;
	}

	return (time);

}
