#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: the head of the linked list
 * @str: the string of the new list
 * Return: pointer of the head .
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newList;

	if (head == NULL || str == NULL)
		return (NULL);

	newList = malloc(sizeof(list_t));

	if (newList == NULL)
		return (NULL);

	newList->str = strdup(str);
	newList->len = strlen(str);

	if (newList->str == NULL)
	{
		free(newList);
		return (NULL);
	}

	newList->next = *head;
	*head = newList;

	return (newList);
}
