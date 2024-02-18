#include "main.h"
#include <stdlib.h>

/** _calloc()- allocates memory
 * @nmemb: a number!
 * @size: another number!
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str = calloc(nmemb, size);
	if(str == NULL)
	{
		return (NULL)
	}
	return (str);
}
