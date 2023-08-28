#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function ...
 * @head: the list
 *
 * Return: 1 or 0
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *tmp;

	ptr = head;
	while (ptr != NULL)
	{
		tmp =  ptr;
		ptr = ptr->next;
		free(tmp);
	}
}
