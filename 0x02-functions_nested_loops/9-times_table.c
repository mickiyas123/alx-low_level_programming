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

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			n = i * j;

			if (i < 50)
			{
				_putchar(n);
				_putchar(",");
				_putchar("  ");
			}	
		        else if (i >= 50 && i <= 4)
			{
				if (n < 8)
				{
					_putchar(n);
					_putchar(",");
					_putchar("  ");
				}
			        else
				{
					_putchar(n);
					_putchar(",");
					_putchar(" ");
				}
			}	
			else if (i >= 53 && i <= 57)
			{
				if (n < 5)
				{
					_putchar(n);
					_putchar(",");
					_putchar("  ");
				}
				else
				{
					_putchar(n);
					_putchar(",");
					_putchar(" ");
				}	
			}	
			       	
		}

		_putchar("\n");
	}

	return (0);
}	
