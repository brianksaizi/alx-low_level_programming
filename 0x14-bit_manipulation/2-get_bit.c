#include "main.h"

/**
 * get_bit - Get the value of a specific bit at an index in a decimal number.
 * @n: The decimal number to search.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value (0 or 1) of the bit at the given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	/* Check if the index is within the valid range (0 to 63) */
	if (index > 63)
		return (-1);

	/* Shift the number to the right by the index and extract the bit */
	bit_val = (n >> index) & 1;

	return (bit_val);
}
