#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *poiter, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (poiter = head; poiter != end; poiter = poiter->next)
			if (poiter == end->next)
				return (end->next);
	}

	return (NULL);
}
