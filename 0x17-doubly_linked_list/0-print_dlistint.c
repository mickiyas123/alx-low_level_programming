#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all elements of double linked list
 * @h: adress of first node
 *
 * Return: length of the double linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
