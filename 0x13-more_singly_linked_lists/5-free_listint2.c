#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that free the list and make head null
 * @head: the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *box;

	if (head == NULL)
		return;
	box = *head;
	while (box != NULL)
	{
		temp = box;
		box = box->next;
		free(temp);
	}
	box = NULL;
	*head = NULL;
}
