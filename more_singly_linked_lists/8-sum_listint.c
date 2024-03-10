#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint()- sums a linked list
 * @head: start of list
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	if (head == NULL || *head == NULL)
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
