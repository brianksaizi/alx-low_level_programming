#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 1024

/**
 * main - Copies the content of one file to another.
 * @argc: The number of arguments provided to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description:
 * - Exits with error codes for various issues:
 *   97 - Incorrect argument count.
 *   98 - Unable to read from file_from.
 *   99 - Unable to write to file_to.
 *  100 - Unable to close file descriptors for file_from or file_to.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, bytes_read, bytes_written;
	char buffer[BUFSIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		bytes_read = read(from_fd, buffer, BUFSIZE);
		if (bytes_read == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

	} while (bytes_read > 0);

	if (close(from_fd) == -1 || close(to_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", (from_fd == -1) ? to_fd : from_fd);
		exit(100);
	}

	return (0);
}
