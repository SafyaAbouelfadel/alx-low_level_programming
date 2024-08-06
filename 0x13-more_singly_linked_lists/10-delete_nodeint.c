#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given position
 * @head: address of pointer to first node
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t node, *previous_node;
	unsigned int idx = 0;

	if (!head || !(*head))
		return (-1);

	node = *head;

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	while (node && idx < index)
	{
		previous_node = node;
		node = node->next;
		idx++;
	}
	if(!node)
		return (-1);

	previous_node->next = node->next;
	free(node);
	return (1);
}
