#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at idx
 * @head: the node
 * @idx: index to insert
 * @n: the new node n
 * Return: sum of data
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newList, *curr;
	unsigned int index;

	if (!head)
		return (NULL);

	if (idx == 0)
	{
		newList = malloc(sizeof(listint_t));
		if (newList == NULL)
			return (NULL);
		newList->n = n;
		newList->next = *head;
		*head = newList;
		return (newList);
	}

	curr = *head;

	for (index = 0; index < idx - 1 && curr; index++)
		curr = curr->next;

	if (!curr)
		return (NULL);

	newList = malloc(sizeof(listint_t));

	if (newList == NULL)
		return (NULL);

	newList->n = n;
	newList->next = curr->next;
	curr->next = newList;

	return (newList);
}
