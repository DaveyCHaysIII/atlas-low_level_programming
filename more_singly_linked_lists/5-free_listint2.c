#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2()- frees a linked list
 * @head: the head of the list to free
 *
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	free(head);
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
