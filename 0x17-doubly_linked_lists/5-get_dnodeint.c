#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at given index
 * @head: address of the current head node
 * @index: index of node to return
 *
 * Return: address of node at index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
