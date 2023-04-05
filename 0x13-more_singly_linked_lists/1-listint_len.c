#include "lists.h"

/**
 * listint_len - a function that returns the number of elements.
 *
 * @h: pointer to the first node
 *
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	/* Initialize a variable called 'elements' to 1,
	 * which will count the number of elements in the list.
	 * Start at 1 because we will count the first node
	 * separately from the while loop below.
	 */
	size_t elements = 1;

	/* If the pointer to the first node is NULL, the list is empty.
	 * In that case, return 0.
	 */
	if (h == NULL)
		return (0);

	/* While the pointer to the next node is not NULL,
	 * indicating that there are still more nodes in the list:
	 */
	while (h->next != NULL)
	{
		/* If the integer value in the current node is not NULL
		 * (indicated by the '\0' value), then increment 'elements'
		 * to count this node.
		 */
		if (h->n != '\0')
			elements++;

		/* Move the pointer to the next node in the list */
		h = h->next;
	}

	/* Return the final count of elements in the list */
	return (elements);
}
