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

			if (j == 9)
			{
				_putchar(n);
			}
			else if (i < 2)
			{
				_putchar(n);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (i >= 2 && i <= 4)
			{
				if (n < 8)
				{
					_putchar(n);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			        else
				{
					_putchar(n);
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (i >= 5 && i <= 9)
			{
				if (n < 5)
				{
					_putchar(n);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(n);
					_putchar(',');
					_putchar(' ');
				}
			}

		}

		_putchar('\n');
	}

}

