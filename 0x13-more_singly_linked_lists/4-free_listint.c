#include "list.h"

/**
 * free_listint - frees a list of ints
 * @head: first node's poiter
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = *head;
		head = head->next;
		free(node);
	}
}
