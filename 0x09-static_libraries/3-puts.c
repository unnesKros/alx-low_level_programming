#include "main.h"

/**
 * _puts - function that prints a strong
 * @s: the string
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

