#include "main.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t num;
	char buff[READ_BUFF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	num = read(file, &buff[0], letters);
	num = write(STDOUT_FILENO, &buff[0], num);
	close(file);
	return (num);
}
