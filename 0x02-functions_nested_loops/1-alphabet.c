#include "main.h"

/**
 * main - Write a function that prints the alphabet, in lowercase, followed by a new line.
 * description - Prototype: void print_alphabet(void)
 * return: 0
 */


void print_alphabet(void)
{
	char alphabet[]= "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i= 0; i< 26; i++)
	{
		_putchar(alphabet[i]);
	}

	_putchar('\n');
}
