#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 1024

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates a 1024-byte buffer for file operations.
 * @file: The name of the file associated with the buffer.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Unable to allocate buffer for %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int result;

	result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - Copies data from one file to another.
 * @from_fd: The source file descriptor.
 * @to_fd: The destination file descriptor.
 */
void copy_file(int from_fd, int to_fd)
{
	char buffer[BUFSIZE];
	ssize_t bytes_read, bytes_written;

	do {
		bytes_read = read(from_fd, buffer, BUFSIZE);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Unable to read from file descriptor %d\n", from_fd);
			exit(98);
		}

		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Unable to write to file descriptor %d\n", to_fd);
			exit(99);
		}

	} while (bytes_read > 0);
}

int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from_fd = open(argv[1], O_RDONLY);
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to read from file %s\n", argv[1]);
		exit(98);
	}

	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to write to %s\n", argv[2]);
		exit(99);
	}

	copy_file(from_fd, to_fd);

	free(buffer);
	close_file(from_fd);
	close_file(to_fd);

	return (0);
}
