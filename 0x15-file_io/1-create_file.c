#include "main.h"

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
	int fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (filename == NULL)
	{
		return (-1);
	}
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		int bytes_written = write(fd, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
