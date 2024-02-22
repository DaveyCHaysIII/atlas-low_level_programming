#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
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
	char saved_name[];
	char saved_owner[];

	saved_name[] = strcpy(name);
	saved_owner[] = strcpy(owner);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
