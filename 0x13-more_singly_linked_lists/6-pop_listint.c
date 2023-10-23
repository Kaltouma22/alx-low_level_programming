#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: A pointer to a pointer to the head of the list
 *
 * Return: 0 if the linked list is empty
 * The data (n) of the deleted head node.
 */

int pop_listint(listint_t **head)
{
	int d = 0;

	listint_t *t;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	t = *head;
	d = t->n;
	*head = (*head)->next;
	free(t);

	return (d);
}
