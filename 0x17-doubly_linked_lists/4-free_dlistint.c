#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function that frees Double Linkedliist
 * @head: Address of frst node
 *
 * Return: Always Success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
