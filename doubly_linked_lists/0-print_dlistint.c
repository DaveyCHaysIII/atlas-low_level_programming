#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_dlistint()- prints all members of a list
 * @h: the head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeCount;
	int num;
	const dlistint_t *current = h;

	nodeCount = 0;
	while (current != NULL)
	{
		num = current->n;
		printf("%d\n", num);
		current = current->next;
		nodeCount++;
	}
	return (nodeCount);
}
