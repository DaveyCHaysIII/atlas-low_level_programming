#include "main.h"

/**
 * swap_int()- swaps two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
