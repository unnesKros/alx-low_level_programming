#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at
 * the beginning of a listint_t list.
 * @head: the list
 * @n: the n value
 * Return: the newList
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
		return (temp);
	}
}
