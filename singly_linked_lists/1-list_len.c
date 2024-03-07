#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len()- gives number of elements in list
 * @h: the head of list
 *
 * Return: number of elements 
 */

size_t list_len(const list_t *h)
{
	size_t length;
	const list_t *current = h;

	length = 0;
	while (current != NULL)
	{
		current = current->next;
		length++;
	}
	return (length);
}
