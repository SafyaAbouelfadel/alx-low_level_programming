#include "lists.h"

/**
 * get_nodeint_at_index - returns node at specific index
 * @head: pointer to first node
 * @index: index of node to get
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int current = 0;

	while (node && current < index)
	{
		node = node->next;
		current++;
	}
	return (node);
}
