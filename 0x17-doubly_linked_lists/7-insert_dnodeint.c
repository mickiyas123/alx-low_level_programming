#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: adress of the first node
 * @idx: index of the list where the new node should be added
 * @n: value to be added at given index
 *
 * Return: Address of a first node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		(*h)->prev = new;
		new->next = *h;
		*h = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (temp != NULL)
			temp = temp->next;
	}

	if (temp != NULL)
	{
		new->prev = temp;
		new->next = temp->next;
		temp->next = new;
		new->next->prev = new;
		return (new);
	}
	else
		return (NULL);
}
