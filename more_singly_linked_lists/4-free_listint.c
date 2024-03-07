#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint()- frees a list
 * @head: the start of the list
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}
}
