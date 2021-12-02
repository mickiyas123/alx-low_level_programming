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

	if (*head)
	{
		*head = (*head)->next;
		return (temp->n);
	}
	return (0);
}
