#include "main.h"


char *_strcat(char *dest, char *src)
{
	int i, j, s, x;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		;

	s = i;
	for (i = i, x = 0; i < (s + j); i++, x++)
	{
		dest[i] = src[x];
	}

	i++;
	dest[i] = '\0';

	return (dest);

}
