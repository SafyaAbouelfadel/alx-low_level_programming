#include "lists.h"
/**
 * listint_len - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	listint_t t = h;
	size_t n = 0;

	while (t)
	{
		t = t->next;
		n++;
	}
	return (n);
}
