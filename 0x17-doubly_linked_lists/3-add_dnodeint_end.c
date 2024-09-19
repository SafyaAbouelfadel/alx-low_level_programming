#include "lists.h"
/**
 * *add_dnodeint_end - add a node to the end of the dlist
 *
 * @head: address of head of the list
 * @n: the value of the new node
 *
 * Return: the address of the new element,
 * or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *node;

	if (!head || new == NULL)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new;
		new->prev = node;
	}
	return (new);
}
