#include "main.h"

/**
 * main - Entry point
 *
 * @argc: Number of arguments passed to the function
 * @argv: Array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int input_fd, output_fd, n_bytes_read, n_bytes_write;
	char text[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	input_fd = open(argv[1], O_RDONLY);
	if (input_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	output_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (output_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((n_bytes_read = read(input_fd, text, BUF_SIZE)) > 0)
	{
		n_bytes_write = write(output_fd, text, n_bytes_read);
		if (n_bytes_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (n_bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_file(input_fd);
	close_file(output_fd);

	return (0);
}

/**
 * close_file - Closes an open file
 *
 * @fd: The file descriptor
 *
 * Return: Nothing
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
