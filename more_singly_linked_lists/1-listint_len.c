#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len()- gives number of elements in list
 * @h: the head of the list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t length;
	const listint_t *current = h;

	length = 0;
	while (current != NULL)
	{
		current = current->next;
		length++;
	}
	return (length);
}

