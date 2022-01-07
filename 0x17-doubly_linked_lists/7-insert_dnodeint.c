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
	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	for (i = 0; i < (idx - 1); i++)
	{
		if (temp != NULL)
			temp = temp->next;
	}
	if (temp->next == NULL)
	{
		temp->next = new;
		new->prev = temp;
		return (new);
	}
	else if (temp != NULL)
	{
		new->prev = temp;
		new->next = temp->next;
		temp->next = new;
		new->next->prev = new;
		return (new);
	}
	return (NULL);
}
