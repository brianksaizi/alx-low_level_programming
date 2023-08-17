#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node at a specific index
 * @h: start of the linked list
 * @idx: index of the newly added node
 * @n: value of the new node
 * Return: added node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;

	if (h == NULL)
		return (0);

	current = *h;

	while (idx != 0)
	{
		current = current->next;
		idx--;
		if (current == NULL)
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = current;
	new->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = new;

	/*TODO: Address the special case when idx is either 0 or the last index.*/

	return (current);
}
