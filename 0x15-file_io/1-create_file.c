#include "main.h"

/**
 * my_strlen - Calculate the length of a string.
 * @s: A pointer to the string to be measured.
 *
 * Return: The length of the string, or 0 if the input is NULL.
 */

size_t my_strlen(const char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - A function that creates a file
 * @filename: the name of the file to creat.
 * @text_content: the text content to write to the file
 *
 * Return: 1 on success, -1 on failure.
 * - Return -1 if file cannot be created, written, or if write failes
 * - Retuen 1 if the dile is created and written successfully
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t bytes_written = 0;
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)
	{
		return (-1);
	}

	return ((size_t)bytes_written == strlen(text_content) ? 1 : -1);
}
