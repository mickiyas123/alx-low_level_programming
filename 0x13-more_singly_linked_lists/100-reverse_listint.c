#include "lists.h"

/**
 * reverse_listint - function that reverse linked list
 * @head: address of first node
 *
 * Return: first node of reverse address
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
