#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head of the linked list.
 * Return: the number of the nodes.
 */

size_t print_list(const list_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		num++;

		h = h->next;
	}
	return (num);
}
