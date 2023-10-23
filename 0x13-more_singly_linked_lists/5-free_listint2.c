#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	while (*head != NULL)
	{
		current = *head;
		temp = current->next;

		free(current);
		*head = temp;
	}
	*head = NULL;
}
