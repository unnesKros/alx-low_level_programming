#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - functin that free the head list.
 * @head: the list to free
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
