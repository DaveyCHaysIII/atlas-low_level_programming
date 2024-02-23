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

	new_name = malloc((_strlen(name) + 1) * sizeof(char));
	if (new_name == NULL)
	{
		return (NULL);
	}
	new_owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (new_owner == NULL)
	{
		free(new_name);
		return (NULL);
	}
	_strcpy(new_name, name);
	_strcpy(new_owner, owner);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_name);
		free(new_owner);
		return (NULL);
	}
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}

/**
 * _strlen()- finds length of str
 * @str: the string in question
 *
 * Return: length of str
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy()- copies a string
 * @dest: the destination
 * @src: the string in question
 *
 * Return: returns pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i, j;

i = 0;
while (src[i] != '\0')
{
i++;
}

j = 0;
while (j <= i)
{
dest[j] = src[j];
j++;
}
return (dest);
}

