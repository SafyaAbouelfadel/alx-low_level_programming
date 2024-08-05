#include "lists.h"

/**
 * print_listint - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
{
	size_t n;

	while (h)
	{
		printf("%d\n", h->next);
		h = h->next;
		n++;
	}
	return (n);
}
