#include "lists.h"

/**
 * free_list - frees all nodes of a list
 * @head: pointer to head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	if (!head)
		return;

	current_node = head;
	while (current_node)
	{
		next_node = current_node->next;
		free(next_node->str);
		free(current_node);
		current_node = next_node;
	}
}
