#include "main.h"
#include <stdlib.h>

/**
 * flip_bits()- find how many bits you'd have to flip to get from n to m
 * @n: the number in question
 * @m: the second number in question
 *
 * Return: number of bits you'd have to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	xor_result = n ^ m;
	count = 0;
	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >> 1;
	}
	return (count);
}
