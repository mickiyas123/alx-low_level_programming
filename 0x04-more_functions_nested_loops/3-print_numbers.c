#include "main.h"

/**
 * print_numbers - prints characters form 0 to 9
 *
 * Return: Always success (0)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
