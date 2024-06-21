#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print a quote using write function
 *	ssize_t write(int fd, const void *buf, size_t count);
 *
 * Return 1 (error)
*/

int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quot, 59);
	return (1);
}
