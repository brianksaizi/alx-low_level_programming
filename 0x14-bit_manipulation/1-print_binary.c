#include "main.h"

/**
 * print_binary - Print the binary representation of a decimal number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	/* Iterate through each bit from the most significant to the least */
	for (i = 63; i >= 0; i--)
	{
		current = n >> i; /* Get the current bit */

		/* Print '1' if the bit is set, otherwise print '0' */
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}

	/* If the number was 0, print '0' */
	if (!count)
		_putchar('0');
}
