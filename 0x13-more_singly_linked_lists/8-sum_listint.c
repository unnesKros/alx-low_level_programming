#include "lists.h"


/**
 * sum_listint - function that sum all of the n of a linkedList
 * @head: the linked list
 * Return: the sum.
 */

int sum_listint(listint_t *head)
{

	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
