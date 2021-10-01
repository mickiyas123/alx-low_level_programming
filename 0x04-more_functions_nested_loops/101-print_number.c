#include "main.h"

/**
 * print_number - prints an integer
 * @n : integer to be printed
 *
 * Return Always success (0)
 */
void print_number(int n);
{
	if (n < 0)
	{
		int k = n * -1;

		if (k > 9)
			_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
	}
	else
	{
		if (n > 9)
			_putchar((k / 10) + '0');
		_putchar((k % 10) + '0');
	}
	_putchar('\n');
}
