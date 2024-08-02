#include "lists.h"

/**
 * add_node - adds a node to the start of the list
 * @head: address of pointer to head node
 * @str: str field of node
 *
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h = malloc(sizeof(list_t));

	if (!new_h || !head)
		return (NULL);
	if (str)
	{
		new_h->str = strdup(str);
		if (!new_h->str)
		{
			free(new_h);
			return (NULL);
		}
		new_h->len = str_len(new_h->str);
	}

	new_h->next = *head;
	return (new_h);
}
