#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked()- allocates memory
 * @b: the number of bytes in question
 *
 * Return: no return
 */

void *malloc_checked(unsigned int b)
{
	unsigned int i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
}
