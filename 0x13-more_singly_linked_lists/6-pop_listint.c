#include "lists.h"

/**
 * pop_listint - pops head node of list
 * @head: address of the pointer to first node
 *
 * Return: value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int value;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = node;
	return (value);
}
