#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main()- multiplies two numbers
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0 if two arguments are supplied, 1 if not
 */

int main(int argc, char *argv[])
{
	int d1, d2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		d1 = atoi(argv[1]);
		d2 = atoi(argv[2]);
		printf("%d\n", d1 * d2);
	}

	return (0);
}
