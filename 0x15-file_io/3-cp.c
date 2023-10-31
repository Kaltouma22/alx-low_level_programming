#include "main.h"

#define READ_BUF_SIZE 1024
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP)

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"

/**
 * main - Copy the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 1 on success, 0 on failure.
 */

int main(int argc, char *argv[])
{
	int source_fd = 0, to_fd;
	ssize_t bytes;
	char buf[READ_BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);

	while ((bytes = read(source_fd, buf, READ_BUF_SIZE)) > 0)
	{
		if (write(to_fd, buf, bytes) != bytes)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	}
	if (bytes == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	source_fd = close(source_fd);
	to_fd = close(to_fd);
	if (source_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, source_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, source_fd),	exit(100);

	return (EXIT_SUCCESS);
}
