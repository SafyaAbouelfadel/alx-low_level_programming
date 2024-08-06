#include "lists.h"

/**
 * free_listint2 - frees a list of ints
 * @head: pointer to first node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *new;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		new = node;
		node = node->next;
		free(new);
	}
	*head = NULL;
}
