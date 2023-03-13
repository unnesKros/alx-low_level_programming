#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenate tow strings
 * @s1: string 1
 * @s2: string 2
 * Return: the full string
 */


char *str_concat(char *s1, char *s2)
{
	int i, j, x;
	char *ar;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	ar = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

	if (ar == NULL)
		return (NULL);

	if (s1 == NULL)
	{
		x = 0;
		ar[0] = ' ';
		x++;
	}
	else
	{
		for (x = 0; x < i; x++)
			ar[x] = s1[x];
	}

	if (s2 == NULL)
	{
		ar[x] = ' ';
		x++;
	}
	else
	{

		for (x = x; x < i + j; x++)
			ar[x] = s2[x - i];
	}

	ar[x] = '\0';
	return (ar);
}
