#include <unistd.h>

/* Write a character to standard output (stdout).
 * @c: The character to be printed.
 *
 * Return: On success, returns 1.
 * On error, returns -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
