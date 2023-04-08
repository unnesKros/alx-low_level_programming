#include "lists.h"

/**
 * pop_listint - function that delete the first node AKA head
 * @head: the head of the list
 */

int pop_listint(listint_t **head)
{

	listint_t *temp;
	int x;

	if (head == NULL)
		return (0);

	temp = (*head)->next;
	x = (*head)->n;
	*head = temp;

	return (x);
}
