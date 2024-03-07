#include "lists.h"
#include <stdio.h>

/**
 * print_list()- prints all elements of a list
 * @h: the head of the list in queston
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodeCount;
	char *string;
	int length;
	const list_t *current = h;

	nodeCount = 0;
	while (current != NULL)
	{
		if (current->str == NULL)
		{
			string = "(nil)";
			length = 0;
		}
		else
		{
			string = current->str;
			length = current->len;
		}
		printf("[%d] %s", length, string);
		current = current->next;
		nodeCount++;
	}
	return (nodeCount);
}
