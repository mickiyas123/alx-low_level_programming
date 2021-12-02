#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes head of a node
 * @head: pointer address of the first node
 *
 * Return: address of first node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int x;

	if (*head)
	{
		*head = (*head)->next;
		x = temp->n;
		free(temp);
	}
	else
	{
		x = 0;
	}
	return (x);
}
