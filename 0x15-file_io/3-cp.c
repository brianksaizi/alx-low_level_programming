#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - Allocates 1024 bytes of memory for a buffer.
 * @file: The name of the file that the buffer will be used for.
 *
 * Return: A pointer to the newly-allocated buffer.
 *
 * Description: This function allocates memory for a buffer of 1024 bytes
 * to be used while copying contents from one file to another.
 * If memory allocation fails, it prints an error message to the standard error
 * and exits the program with exit code 99.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't allocate memory for %s buffer\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 *
 * Description: This function is responsible for closing a file descriptor.
 * If closing the file descriptor fails, it prints an error message to the
 * standard error and exits the program with exit code 100.
 */
void close_file(int fd)
{
	int status;

	status = close(fd);

	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: This program copies the contents from one file to another.
 * If the argument count is incorrect, it prints a usage message to the standard
 * error and exits with exit code 97.
 * If the source file (file_from) does not exist or cannot be read, it prints an
 * error message to the standard error and exits with exit code 98.
 * If the destination file (file_to) cannot be created or written to, it prints
 * an error message to the standard error and exits with exit code 99.
 * If closing any of the files fails, it prints an error message to the standard
 * error and exits with exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
