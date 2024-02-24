#include "function_pointer.h"

/**
 * print_name()- prints a name
 * @name: name in question
 * @f: the function in question
 *
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
