#include "lists.h"

/**
 * get_nodeint_at_index - function that return the nth node of the list.
 * @head: the head node
 * @index: the index where we search for
 * Return: the node with exact index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		else if (count < index)
		{
			head = head->next;
			count++;
		}
		else
			break;
	}

	return (NULL);
}
