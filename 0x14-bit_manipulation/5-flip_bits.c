#include "main.h"

/**
 * flip_bits - Count the number of bits to change from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: Number of bits to change between the two numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	/* Iterate through each bit from the most significant to the least */
	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i; /* Get the current bit */
		if (current & 1)
			count++; /* Increment count if the bit is different between n and m */
	}

	return (count);
}
