#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: integer input
 *
 */

void print_times_table(int n)
{
	if (n >= 0 && n < 16)
	{
		int i, j, result;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;

				if (j == 0)
				{
					_putchar(result + '0');
				}
				else if (result < 10)
				{
					 _putchar(',');
					 _putchar(' ');
					 _putchar(' ');
					 _putchar(' ');
					 _putchar(result + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (result >= 10 && result <= 99)
					{
						_putchar(' ');
						_putchar((result / 10) + '0');
					}
					else
					{
						_putchar((result / 100) + '0');
						_putchar((result % 100) / 10 + '0');
					}
					_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
