#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index()- get node at index
 * @head: top of linked list
 * @index: the node in question
 *
 * Return: the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int ll_ind = 0;

	current = head;
	while (ll_ind < index)
	{
		if (current == NULL)
		{
			return (NULL);
		}

		current = current->next;
		ll_ind++;
	}
	return (current);
}
