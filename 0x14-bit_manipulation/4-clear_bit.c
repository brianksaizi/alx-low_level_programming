#include "main.h"

/**
 * clear_bit - Set the value of a bit at a specified index to 0.
 * @n: Pointer to the number to change.
 * @index: Index of the bit to clear.
 *
 * Return: 1 on success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
