#include "main.h"

/**
 * clear_bit - Clear the value of a given bit to 0.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to clear.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is within the valid range (0 to 63) */
	if (index > 63)
		return (-1);

	/* Clear the bit at the given index to 0 using bitwise AND and NOT */
	*n = (~(1UL << index) & *n);

	return (1);
}
