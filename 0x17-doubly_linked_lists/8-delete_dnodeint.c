#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at given position
 * @head: Address of first node
 * @index: position of a nodeto be deleted
 *
 * Return: 1 if delete success -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *curr;
	unsigned int i;
	if (*head == NULL)
		return (-1);

        if (index == 0)
        {
                *head = (*head)->next;
                free(temp);
                return (1);
        }
}
