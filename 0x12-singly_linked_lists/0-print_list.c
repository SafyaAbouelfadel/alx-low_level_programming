#include "lists.h"

/**
 * str_len - return the length
 * @c: the string to check
 *
 * Return: length of string
 */
int str_len(char *c)
{
	int len = 0;

	if (!c)
		return (0);
	while (*c++)
		len++;
	return (len);
}

/**
 * print_list - prints a linked lists
 * @h: pointer to the first node
 *
 * Return: the size of list
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("[%d] %s\n", str_len(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		s++;
	}
	return (s);
}
