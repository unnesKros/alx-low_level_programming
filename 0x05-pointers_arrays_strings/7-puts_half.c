#include "main.h"

/**
 * puts-half - function that prints half of a string, followed by a new line.
 * @str: the string
 */

void puts_half(char *str)
{
	int i;
	int x;

	for (i = 0; str[i] != '\0'; i++)
		;

	if (i % 2 == 1)
		x = (i - 1) / 2;
	else
		x = i / 2;
	for (x = x; x <= i; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
