#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list
 * @head: address of pointer to head node
 * @str: string field of node
 *
 * Return: the address of the new element,
 *	or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail = malloc(sizeof(list_t));
	list_t *current = *head;

	if (!head || !new_tail)
		return (NULL);
	if (str)
	{
		new_tail->str = strdup(str);
		if (!new_tail->str)
		{
			free(new_tail);
			return (NULL);
		}
		new_tail->len = str_len(new_tail->str);
	}
	if (current)
	{
		while (current->next)
			current = current->next;
		current->next = new_tail;
	}
	else
		*head = new_tail;
	return (new_tail);
}
