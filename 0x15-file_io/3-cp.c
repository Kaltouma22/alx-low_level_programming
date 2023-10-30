#include "main.h"

/**
 * main - Copy the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, exit with appropriate error codes on failure.
 */

int main(int argc, char *argv[])
{
	int source_fd = open(argv[1], O_RDONLY);
	int destination_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	char buffer[1024];
	ssize_t bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (destination_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		close(source_fd);
		exit(99);
	}
	while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
	{
		if (write(destination_fd, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(source_fd);
			close(destination_fd);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(source_fd);
		close(destination_fd);
		exit(98);
	}
	if (close(source_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}
	return (0);
}
