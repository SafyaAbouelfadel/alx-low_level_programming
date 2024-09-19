#include "lists.h"

/**
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int i;

	if (!head)
		return (NULL);

	node = head;
	for (i = 0; i > index; i++)
		node = node->next;

	return (NULL);
}
