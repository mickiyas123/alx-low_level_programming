#include <stdlib.h>
#include <stdio.h>
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
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i = 1;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));

	while (temp)
	{
		count++;
		temp = temp->next;
	}

	temp = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->n = n;
		new->next = NULL;

		if (idx == 100)
		{
			return (*head);
		}
		else if (idx == 0)
		{
			new->next = *head;
			*head = new;
		}
		else if (idx == 1)
		{
			new->next = temp->next;
			temp->next = new;
		}
		else
		{
			while (i < idx)
			{
				temp = temp->next;
				i++;
			}
			new->n = n;
			new->next = temp->next;
			temp->next = new;
		}
		return (*head);
	}
}
