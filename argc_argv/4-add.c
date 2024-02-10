#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main()- adds two positive numbers together
 * @argc: number of args
 * @argv: arr of args
 *
 * Return: 0 if valid, 1 if not
 */

int main(int argc, char *argv[])
{
	int i, j, num, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			num = argv[i][j];
			if (!isdigit(num))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
