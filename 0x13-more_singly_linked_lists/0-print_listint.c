#include "lists.h"

/**
 * print_listint - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
{
	listint_t t = h;
	size_t n;

	while (t)
	{
		printf("%d\n", t->next);
		t = t->next;
		n++;
	}
	return (n);
}
