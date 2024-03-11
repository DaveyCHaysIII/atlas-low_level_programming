#include "main.h"
#include <stdlib.h>

/**
 * clear_bit()- assigns a bit to 0
 * @n: the number in question
 * @index: the index to change
 *
 * Return: 1 on success, -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}
