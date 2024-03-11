#include "main.h"
#include <stdlib.h>

/**
 * set_bit()- sets bit at index
 * @n: the int in question
 * @index: the index in question
 *
 * Return: 1 for yes, -1 for no
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}
