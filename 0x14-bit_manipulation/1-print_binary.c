#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit;
	int start = 0;
	unsigned int mask = 1073741824;

	/* Check if n is equal to 0 */
	if (n == 0)
	{
		_putchar(48); /* Print '0' */
		return;
	}

	/* Set mask to n if n is greater than the initial mask */
	if (n > mask)
		mask = n;

	/* Iterate through each bit using the mask */
	while (mask > 0)
	{
		bit = n & mask; /* Get the current bit */
		if (bit > 0)
			start = 1; /* Mark the start of significant bits */

		/* Print the binary representation */
		if (start == 1)
		{
			if (bit == 0)
				_putchar(48); /* Print '0' */
			else
				_putchar(49); /* Print '1' */
		}
		mask >>= 1; /* Move to the next bit */
	}
}
