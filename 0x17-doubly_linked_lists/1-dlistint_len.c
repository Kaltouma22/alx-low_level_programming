#include "lists.h"

/**
 * dlistint_len -returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of th doubly linked list
 * Return: The number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
