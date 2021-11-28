#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees linked list
 * @head: Address of the first node
 *
 * Return: Always Success
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
