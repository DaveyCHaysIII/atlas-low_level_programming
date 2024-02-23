#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog()- frees a dog
 * @d: the dog in question
 *
 * Return: no return
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
