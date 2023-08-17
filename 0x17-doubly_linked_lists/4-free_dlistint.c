#include "lists.h"

/**
 * free_dlistint - deallocates a listint_t list
 * @head: start of the linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
