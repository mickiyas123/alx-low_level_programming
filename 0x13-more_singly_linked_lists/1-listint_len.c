#include <stdio.h>
#include "lists.h"

/**
 * listint_len - find total number of nodes in linkedlist
 * @h: pointer to first node
 *
 * Return: Total number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int total = 0;

	while (h)
	{
		total++;
		h = h->next;
	}
	return (total);
}
