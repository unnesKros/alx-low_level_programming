#include "lists.h"
#include <string.h>

/**
 * add_node_end -  a function that adds a new node at the end of a list_t list.
 * @head: the head of the list
 * @str: the string.
 * Return: the newList
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newList;
	list_t *current = *head;

	if (head == NULL || str == NULL)
		return (NULL);
	newList = malloc(sizeof(list_t));

	if (newList == NULL)
		return (NULL);

	newList->str = strdup(str);

	if (newList->str == NULL)
	{
		free(newList);
		return (NULL);
	}

	newList->len = strlen(str);
	newList->next = NULL;

	if (*head == NULL)
		*head = newList;
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newList;
	}
	return (newList);
}
