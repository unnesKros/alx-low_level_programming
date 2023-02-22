#include "main.h"

/**
 * irint_sign - Print thye sign of a number.
 * @n: the number to test
 * Return: 1 if positive, 0 if 0, -1 if negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
