#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint_end - add a node in the end of the list
 * @head: the list
 * @n: the number if the new node
 * Return: the newNode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *box;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		box = *head;
		while (box->next != NULL)
		{
			box = box->next;
		}

		box->next = temp;
	}
	return (temp);
}
