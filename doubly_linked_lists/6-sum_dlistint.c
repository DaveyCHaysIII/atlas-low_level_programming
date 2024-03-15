#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint()- sums a linked list
 * @head: start of list
 *
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
