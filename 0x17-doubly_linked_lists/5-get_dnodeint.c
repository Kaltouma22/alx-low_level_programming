#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node to retrieve
 * Return: Pointer to the nth node of the list,
 * or NULL if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	while (head != NULL)
	{
		if (cnt == index)
			return (head);
		cnt++;
		head = head->next;
	}
	return (NULL);
}
