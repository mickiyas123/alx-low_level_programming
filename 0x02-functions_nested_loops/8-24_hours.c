#include "main.h"

/**
 * void jack_bauer - Entry Point
 * Description: prints every minute of the day from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, z;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (z = 0; z <=9; z++)
				{
					_putchar('i');
					_putchar('j');
					_putchar(':');
					_putchar('k');
					_putchar('z');
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
