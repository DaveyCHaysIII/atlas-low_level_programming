#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * dlistint_len()- returns lenght of linked list
 * @h: the head of the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length;
	const dlistint_t *current = h;

	length = 0;
	while (current != NULL)
	{
		current = current->next;
		length++;
	}
	return (length);
}
