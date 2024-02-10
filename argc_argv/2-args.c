#include "main.h"
#include <stdio.h>

/**
 * main()- prints out all args
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		i = 0;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
