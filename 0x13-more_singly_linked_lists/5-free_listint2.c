#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees linked list
 * @head: Adrees of the pointer of first node
 *
 * Return: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
