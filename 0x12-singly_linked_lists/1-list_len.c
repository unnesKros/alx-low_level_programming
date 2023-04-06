#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the linked list.
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int num = 0;

	if (h == NULL)
	{
		return (num);
	}
	else
	{
		do {
			num++;
			h = h->next;
		} while (h != NULL);
	}
	return (num);
}
