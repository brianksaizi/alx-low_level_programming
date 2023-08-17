#include "lists.h"
#include <string.h>

/**
 * *add_dnodeint - inserts a node at the beginning of a linked list
 * @head:  list with links head
 * @n: integer value within the linked list
 * Return: count of elements
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
