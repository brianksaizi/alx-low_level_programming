#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node from a listint_t linked list.
 * @head: start of the linked list
 * @index: Requested node index to retrieve.
 * Return: list element
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (0); /*Beyond the valid range*/
	}

	return (current);
}
