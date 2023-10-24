#include "lists.h"

/**
 * sum_listint-Returns the sum of all the data (n) of a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: 0 if tha list is empty, or the sum of all tha data values.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
