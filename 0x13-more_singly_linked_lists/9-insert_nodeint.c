#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: adress of the first node
 * @idx: index of the list where the new node should be added
 * @n: value to be added at given index
 *
 * Return: Address of a first node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;

	unsigned int i = 0;

	temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = NULL;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
		}
		else
		{
			while (i < (idx - 1))
			{
				temp = temp->next;
				i++;
			}
			new->next = temp->next;
			temp->next = new;
		}
		return (*head);
	}


}
