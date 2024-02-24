#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func()- gets the function for each operator
 * @s: the operator in question
 * @a: the first arg passed
 * @b: the second arg passed
 *
 * Return: result of op
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

}
