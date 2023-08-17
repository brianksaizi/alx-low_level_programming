#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Display the contents of the doubly linked list.
 * @h: list with links
 *
 * Return: count of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}
