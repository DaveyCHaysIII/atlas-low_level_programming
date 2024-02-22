#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog()- prints a dog
 * @d: the dog that needs a printin
 *
 * Return: no return
 */

void print_dog(struct dog *d)
{
	char nil[3];

	nil = "nil";
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: %s\n", nil);
		}

		if (d->age != 0)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: %s\n", nil);
		}

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: %s\n", nil);
		}
	}
}
