#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all the element in linked list
 * @h: first address of a the linked list
 *
 * Return: toal number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
