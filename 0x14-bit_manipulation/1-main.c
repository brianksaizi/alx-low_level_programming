#include <stdio.h>
#include "main.h"
#include "limits.h"

/**
 * main - Entry point to test the print_binary function
 *
 * Return: Always 0.
 */
int main(void)
{
	/* Test case: print binary representation of 0 */
	print_binary(0);
	printf("\n");

	/* Test case: print binary representation of 1 */
	print_binary(1);
	printf("\n");

	/* Test case: print binary representation of 98 */
	print_binary(98);
	printf("\n");

	/* Test case: print binary representation of INT_MAX */
	print_binary(INT_MAX);
	printf("\n");

	/* Test case: print binary representation of (1 << 10) + 1 */
	print_binary((1 << 10) + 1);
	printf("\n");

	return (0);
}
