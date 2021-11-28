#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_t *add_node - function that adds a new node at the start of linedlist
 * @head: Address of head pointer
 * @str: Adress of a string
 *
 * Return: Pointer variable
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = *head;
		*head = new;
	}
	return (*head);
}
