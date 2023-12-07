#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
