#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file.
 * @filename: Name of the file.
 * @text_content: Text to append.
 *
 * Return: 1 if successful, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_open, fd_write;

	if (filename == NULL)
		return (-1);

	fd_open = open(filename, O_RDWR | O_APPEND);
	if (fd_open == -1)
		return (-1);

	if (text_content != NULL)
	{
		fd_write = write(fd_open, text_content, _strlen(text_content));
		if (fd_write == -1)
			return (-1);
	}

	close(fd_open);
	return (1);
}

/**
 * _strlen - Calculate the length of a string.
 * @str: Array of characters.
 *
 * Return: Length of the string.
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str++)
		count++;

	return (count);
}
