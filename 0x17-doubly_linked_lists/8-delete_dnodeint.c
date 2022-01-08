#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at given position
 * @head: Address of first node
 * @index: position of a nodeto be deleted
 *
 * Return: 1 if delete success -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (temp->next)
			temp->next->prev = NULL;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	temp->prev->next = NULL;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);

	return (1);
}
