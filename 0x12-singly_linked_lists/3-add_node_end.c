#include "lists.h"

/**
 * add_node_end-Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_end = malloc(sizeof(list_t));

	if (node_end == NULL || str == NULL)
	{
		return (NULL);
	}

	node_end->str = strdup(str);
	if (node_end->str == NULL)
	{
		free(node_end);
		return (NULL);
	}

	node_end->len = strlen(str);
	node_end->next = NULL;

	if (*head == NULL)
	{
		*head = node_end;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = node_end;
	}
	return (node_end);
}
