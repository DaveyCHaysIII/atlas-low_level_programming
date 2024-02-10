#include "main.h"
#include <stdio.h>

/**
 * main()- prints number of args
 * @argc: number of args
 * @argv: args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;

	return (0);
}
