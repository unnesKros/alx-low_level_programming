#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that delete the first node AKA head
 * @head: the head of the list
 * Return: the num of the deleted head
 */

int pop_listint(listint_t **head)
{

	listint_t *temp;
	int x;

	if (head == NULL || *head == NULL)
		return (0);

	x = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (x);
}
