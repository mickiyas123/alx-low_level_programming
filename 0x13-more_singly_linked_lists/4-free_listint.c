#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: pointer to the first node
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
