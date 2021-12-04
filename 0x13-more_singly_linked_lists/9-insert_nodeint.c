#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: adress of the first node
 * @idx: index of the list where the new node should be added
 * @n: value to be added at given index
 *
 * Return: Address of a first node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (temp != NULL)
			temp = temp->next;
	}

	if (temp != NULL)
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
	else
		return (NULL);
}
