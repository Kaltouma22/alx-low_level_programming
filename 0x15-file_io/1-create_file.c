#include "main.h"

/**
 * my_strlen - Calculate the length of a string.
 * @s: A pointer to the string to be measured.
 *
 * Return: The int length of the string.
 */

int my_strlen(char *s)
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
 * Return: 1 on success, 0 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, slen = strlen(text_content);

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (slen)
	{
		bytes = write(fd, text_content, slen);
	}
	close(fd);
	return (bytes == slen ? 1 : -1);
}
