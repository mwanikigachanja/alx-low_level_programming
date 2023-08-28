#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function ...
 * @head: the list
 *
 * Return: 1 or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;
	return (n);
}
