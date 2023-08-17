#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Find the count of nodes in the doubly linked list.
 * @h: list with links
 *
 * Return: count of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nbr_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}
