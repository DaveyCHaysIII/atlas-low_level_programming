#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node()- adds a node to front of linked list
 * @head: the first node in the list
 * @str: data for the new node
 *
 * Return: the new node!
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * _strlen()- gives length of str
 * @str: the str
 *
 * Return: len str
 */

int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
