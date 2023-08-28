#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - prints all the elements of a linked list
 * @head: linked list of type listint_t to print
 * @index: the number
 *
 * Return: number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *ptr = head;

	while (num != index && ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}

	if (ptr == NULL)
		return (NULL);
	else
		return (ptr);
}
