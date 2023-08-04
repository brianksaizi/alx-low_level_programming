#include <stdio.h>
#include "main.h"

/**
 * main - Entry point to test the binary_to_uint function
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int n;

	/* Test case: binary number "1" */
	n = binary_to_uint("1");
	printf("%u\n", n);

	/* Test case: binary number "101" */
	n = binary_to_uint("101");
	printf("%u\n", n);

	/* Test case: invalid binary number "1e01" */
	n = binary_to_uint("1e01");
	printf("%u\n", n);

	/* Test case: binary number "1100010" */
	n = binary_to_uint("1100010");
	printf("%u\n", n);

	/* Test case: binary number "0000000000000000000110010010" */
	n = binary_to_uint("0000000000000000000110010010");
	printf("%u\n", n);

	return (0);
}
