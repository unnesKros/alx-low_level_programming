#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that delete the first node AKA head
 * @head: the head of the list
 */

int pop_listint(listint_t **head)
{

	listint_t *temp;
	int x;

	if (head == NULL || *head == NULL)
		return (0);

	temp = (*head)->next;
	x = (*head)->n;
	*head = temp;
	free(temp);
	return (x);
}
