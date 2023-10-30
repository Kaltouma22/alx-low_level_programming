#include "main.h"

/**
 * read_textfile-Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 * Returns 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char *bffr;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	bffr = malloc(letters);
	if (bffr == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, bffr, letters);
	if (bytes_read == -1)
	{
		free(bffr);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, bffr, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(bffr);
		close(fd);
		return (0);
	}

	free(bffr);
	close(fd);
	return (bytes_written);
}
