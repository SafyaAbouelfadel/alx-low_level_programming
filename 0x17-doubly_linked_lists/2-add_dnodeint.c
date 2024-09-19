#include "lists.h"
/**
 * *add_dnodeint - add a node to a d linked list
 *
 * @head: address of the head
 * @n: value of the new node
 *
 * Return: the address of the new element,
 * or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || new == NULL)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->prev = NULL;

	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
