#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that returns total number of nodes
 * in a double linked list
 * @h: adress of first node
 *
 * Return: length of the double linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
