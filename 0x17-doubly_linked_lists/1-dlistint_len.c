#include "lists.h"

/**
 * dlistint_len - returns the length of a dlist
 *
 * @h: address of the head
 *
 * Return: the lenght of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t k;

	while(h)
	{
		h = h->next;
		k++;
	}
	return (k);
}
