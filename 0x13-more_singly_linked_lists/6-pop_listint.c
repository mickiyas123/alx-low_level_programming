#include <stdlib.h>
#include "lists.h"

/**
 * pop_listin - function that deletes head of a node
 * @head: pointer address of the first node
 *
 * Return: address of first node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	if (*head)
	{
		*head = temp->next;
		free(temp);
		return ((*head)->n);
	}
	else
	{
		return 0;
	}
}
