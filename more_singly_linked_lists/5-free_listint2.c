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
	listint_t *current;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
