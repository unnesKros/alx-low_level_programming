#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *c)
{
	int i, j;
	int trigger = 1;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 64 && c[i] < 91 && trigger == 1)
			trigger = 0;
		else if (c[i] > 47 && c[i] < 58 && trigger == 1)
			trigger = 0;
		else if (c[i] > 96 && c[i] < 123 && trigger == 1)
		{
			c[i] -= 32;
			trigger = 0;
		}

		else
		{
			for (j = 0; nots[j] != '\0'; j++)
			{
				if (nots[j] == c[i])
				{
					trigger = 1;
					break;
				}
			}
		}
	}

	return (c);
}
