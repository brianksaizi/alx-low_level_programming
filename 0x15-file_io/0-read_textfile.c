#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file, print to STDOUT
 * @filename: Reading the text file
 * @letters: Number of letters to be read
 * Return: w- The actual number of bytes read and printed is
 *	0 in case of function failure or when the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
