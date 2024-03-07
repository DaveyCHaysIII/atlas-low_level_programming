#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list()- frees a list
 * @head: the start of the list
 *
 * Return : no return
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;

		if (current->str != NULL)
		{
			free(current->str);
		}
		free(current);
		current = next;
	}
}
