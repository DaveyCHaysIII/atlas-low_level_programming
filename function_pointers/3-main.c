#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * main()- the main function
 * @argc: number of args
 * @argv: arr of args
 *
 * Return: err or 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char op;
	char *valid_ops;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2][0];
	valid_ops = "+-*/%";

	if ((strchr(valid_ops, op) == NULL) || (strlen(argv[2]) != 1))
	{
		printf("Error\n");
		return (99);
	}

	if ((op == '/' || op == '%') && (num1 == 0 || num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(&op)(num1, num2));
	return (0);
}
