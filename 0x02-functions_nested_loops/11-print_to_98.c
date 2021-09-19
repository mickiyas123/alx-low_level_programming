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
	for (n = n; n < 98; n++)
	{
		_putchar(n);
	}
}
