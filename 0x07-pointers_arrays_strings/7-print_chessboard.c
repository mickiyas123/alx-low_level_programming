#include "main.h"

/**
 * print_chessboard - Print all the element in 2d array
 * @a: Adress of 2d array
 *
 * Return: Success
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
