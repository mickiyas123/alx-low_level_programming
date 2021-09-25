#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural number to 98
 * Description: prints all natural numbers from n to 98, followed by a new line
 *@n: int parameter
 *
 * Return: returns natural numbers
 */
void print_to_98(int n)
{
	for (n = n; n <= 98; n++)
	{
		int k = n * -1;

		if (k < 10)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	}
	_putchar("\n");
}
