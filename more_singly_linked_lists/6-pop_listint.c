#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint()- pops the first element off the list
 * @head: the first element
 *
 * Return: data from pop'd node or 0i
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	data = current->n;
	*head = current->next;

	free(current);

	return (data);

}
