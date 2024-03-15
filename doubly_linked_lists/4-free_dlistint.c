#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dlistint()- frees a list
 * @head: the start of the list
 *
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
