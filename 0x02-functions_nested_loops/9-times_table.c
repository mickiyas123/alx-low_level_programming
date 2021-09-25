#include "main.h"

/**
 * times_table - Main Entry
 * Description: time table starting from 0 to 9
 *
 * Return 0 Always Successful
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;

			if (j == 0)
			{
				_putchar(n + '0');
			}
			else if (n < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
