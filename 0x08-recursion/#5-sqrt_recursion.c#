#include "main.h"

int _sqrt_recursion(int n)
{
	return (mysqrt(n, 1));
}

int mysqrt(int n, int i)
{
	int c;

	c =i * i;
	if (c > n)
		return (-1);
	else if (c == n)
		return (i);
	else
		return (mysqrt(n, i + 1));
}
