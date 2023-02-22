#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
	int x;
	if (n < 0)
	{
		x = -1 * (n% 10);
		_putchar('0' + x);
		return (x);
	}
	else
	{

		x= (n % 10);
		_putchar('0' + x);
		return (x);
	}
}
