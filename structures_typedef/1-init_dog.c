#include "main.h"

/**
 * init_dog()- inits a dog
 * @d: the dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
