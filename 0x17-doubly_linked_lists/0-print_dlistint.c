#include "lists.h"

/**
 * print_dlistint - print a doubly linked list
 *
 * @h: head of the doubly linked list
 *
 * Return: the number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	if (h == 0)
		return (0);

	for (k = 0; h != 0; k++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (k);
}
