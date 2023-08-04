#include "main.h"

/**
 * set_bit - Set a bit at a given index to 1.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is within the valid range (0 to 63) */
	if (index > 63)
		return (-1);

	/* Set the bit at the given index to 1 using bitwise OR */
	*n = ((1UL << index) | *n);

	return (1);
}
