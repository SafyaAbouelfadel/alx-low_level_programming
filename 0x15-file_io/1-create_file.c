#include "main.h"

/**
 * _str_len - calculates the length of a string
 * @s: the string whose length to check
 *
 * Return: return integer length of string
 */
int _str_len(char *s)
{
	int len = 0;

	if (!s)
		return (0);

	while (*s++)
		len++;
	return (len);
}

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t num = 0, leng = _str_len(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (leng)
		num = write(file, text_content, leng);
	close(file);
	return (num == leng ? 1 : -1);
}
