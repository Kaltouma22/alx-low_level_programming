#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added (starting at 0)
 * @n: The integer value to be added to the new node.
 *
 * Return: NULL if it fails, or The address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *current;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
