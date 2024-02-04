#include "main.h"

/**
 * print_chessboard()- prints a chessboard
 * @a: the array with the data
 *
 * Return: no return;
 */

void print_chessboard(char (*a)[8])
{
	int i, j; 
	
	for (i = 0; i < 8; i++)
	{
		for(j = 0; j < 8; j++)
		{
			_putchar("%c", a[i][j]);
		}
		_putchar("\n");
	}

}
