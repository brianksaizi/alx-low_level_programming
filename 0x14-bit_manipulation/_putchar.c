#include "main.h"
#include <unistd.h>

/**
 * _putchar - Outputs a character to the standard output
 * @c: The character to be printed
 *
 * Return: Returns 1 on success.
 * If an error occurs, -1 is returned and errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
