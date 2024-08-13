#include "main.h"

#define USAGE "Usage: cp source_file destination_file\n"
#define ERROR_READ "Error: Can't read from file %s\n"
#define ERROR_WRITE "Error: Can't write to file %s\n"
#define ERROR_CLOSE "Error: Can't close file descriptor %d\n"
#define FILE_PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - Copies the content of one file to another
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 1 on success, 0 on failure
 */
int main(int argc, char **argv)
{
	int source_fd = 0, desti_fd = 0;
	ssize_t bytes_read;
	char buffer[READ_BUFF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
		dprintf(STDERR_FILENO, ERROR_READ, argv[1]), exit(98);

	desti_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, FILE_PERMISSIONS);
	if (desti_fd == -1)
		dprintf(STDERR_FILENO, ERROR_WRITE, argv[2]), exit(99);

	while ((bytes_read = read(source_fd, buffer, READ_BUF_SIZE)) > 0)
	{
		if (write(desti_fd, buffer, bytes_read) != bytes_read)
			dprintf(STDERR_FILENO, ERROR_WRITE, argv[2]), exit(99);
	}

	if (bytes_read == -1)
		dprintf(STDERR_FILENO, ERROR_READ, argv[1]), exit(98);

	source_fd = close(source_fd);
	desti_fd = close(desti_fd);
	if (source_fd)
		dprintf(STDERR_FILENO, ERROR_CLOSE, source_fd), exit(100);
	if (destination_fd)
		dprintf(STDERR_FILENO, ERROR_CLOSE, desti_fd), exit(100);

	return (EXIT_SUCCESS);
}
