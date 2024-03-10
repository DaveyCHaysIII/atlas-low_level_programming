#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2()- frees a linked list
 * @head: the head of the list to free
 *
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next = current->next;

	while (current != NULL)
	{
		free(current);
		current = next;
	}
}
