#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function ...
 * @h: the list
 *
 * Return: 1 or 0
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	int cpt = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		cpt++;
	}
	return (cpt);
}
