#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint()- adds a node to the front of the linked list
 * @head: the first node in the list
 * @n: data for the new node
 *
 * Return: the new node!
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
