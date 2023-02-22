#include "main.h"


/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Decsiption : Prototype: void print_alphabet_x10(void);
 * You can only use _putchar twice in your code
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 9; i++)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}


