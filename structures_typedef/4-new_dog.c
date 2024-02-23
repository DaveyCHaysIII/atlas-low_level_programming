#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog()- makes a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	char new_name = malloc(strlen(name) * sizeof(char) + 1);

	if (new_name == NULL)
	{
		return (NULL);
	}
	char new_owner = malloc(strlen(owner) * sizeof(char) + 1);

	if (new_owner == NULL)
	{
		free(new_name);
		return (NULL);
	}
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
