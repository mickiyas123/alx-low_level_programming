#include "main.h"

/**
 * print_line - prints straight line
 * @n: number showing how may times a line will be printed
 *
 * Return : Always success (0);
 */
void print_line(int n)
{
	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
