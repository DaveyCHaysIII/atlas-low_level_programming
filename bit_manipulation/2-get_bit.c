#include "main.h"
#include <stdlib.h>

/**
 * get_bit()- takes a bite out of you
 * @n: the number in question
 * @index: the index desired
 *
 * Return: value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	value = (n >> index) & 1;
	return (value);
}
