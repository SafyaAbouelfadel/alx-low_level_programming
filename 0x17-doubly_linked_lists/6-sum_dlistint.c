#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at given index
 * @head: pointer to current head node
 * @index: index of node to return
 *
 * Return: address of node at index
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n
		head = head->next;
	}
	return (sum);
}
