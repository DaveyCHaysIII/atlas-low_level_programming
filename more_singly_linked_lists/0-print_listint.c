#include "lists.h"
#include <stdio.h>

/**
 * print_listint()- prints all elements of a list
 * @h: the head of the list in question
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeCount;
	int num;
	const listint_t *current = h;

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
