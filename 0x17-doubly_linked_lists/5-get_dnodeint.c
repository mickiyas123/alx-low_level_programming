#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a Doble Linkedlist
 * @head: Address of the first node
 * @index: the node index to be retrieved
 *
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}

