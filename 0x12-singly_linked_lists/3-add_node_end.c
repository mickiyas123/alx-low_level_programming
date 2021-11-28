#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the
 * end of a linkedlist
 * @head: Adress of the first node
 * @str: string each node contains
 *
 * Return: Adress of first element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
		}
		else
		{
			temp = *head;

			while (temp->next != 0)
			{
				temp = temp->next;
			}
			temp->next = new;
		}
	return (*head);
	}
}
