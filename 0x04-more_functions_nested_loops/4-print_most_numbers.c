#include "main.h"

/**
 * print_numbers - prints characters form 0 to 9 except 2 and 4
 *
 * Return: Always success (0)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 ||  i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
