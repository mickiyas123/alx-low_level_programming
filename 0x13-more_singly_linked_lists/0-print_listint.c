#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print the elments in a node and
 * total number of nodes
 * @h: pointer to the first node
 *
 * Return: total number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int total = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		total++;
	}
	return (total);
}
