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
	dlistint_t *tmp;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (head != NULL && *head !== NULL)
	{
		tmp = *head;
		tmp->prev = new_node;
	}	
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
