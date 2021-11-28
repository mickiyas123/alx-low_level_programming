#include <stdlib.h>
#include "lists.h"


/*
 * free_list - function that frees linked list
 * @head: Address of the first node
 *
 * Return: Always Success
 */
void free_list(list_t *head)
{
	list_t *p, *store;

	p = head;

	while(p != NULL)
	{
		store = p->next;
		free(p);
		p = store;
	}
}
