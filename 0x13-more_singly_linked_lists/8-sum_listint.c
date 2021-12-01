#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - addes all of the data in linked list nodes
 * @head: first node address
 *
 * Return: sum of all the dat
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
}
