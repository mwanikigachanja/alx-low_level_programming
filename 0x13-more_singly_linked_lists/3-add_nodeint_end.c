#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * add_nodeint_end - a function
 * @head: the list
 * @n: the chain
 *
 * Return: 1 or 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr = *head;

	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (ptr == NULL)
	{
		*head = new;
		return (*head);
	}
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}
