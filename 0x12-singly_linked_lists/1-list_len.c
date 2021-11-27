#include <stdio.h>
#include "lists.h"

/**
 * list_len - Return the number of nodes in linkedlist
 * @h: Address of the first node
 *
 * Return: Total number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
