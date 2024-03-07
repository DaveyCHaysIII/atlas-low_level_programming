#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint()- adds a node to the front of the linked list
 * @head: the first node in the list
 * @n: data for the new node
 *
 * Return: the new node!
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
