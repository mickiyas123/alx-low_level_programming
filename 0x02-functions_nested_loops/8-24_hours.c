#include "main.h"

/**
 * jack_bauer - Entry Point
 * Description: prints every minute of the day from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, z;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 52; k++)
			{
				for (z = 48; z <= 57; z++)
				{

					if (i = 49 && i < 52)
					{
						continue;
					}
					else
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(z);
						_putchar('\n');
					}
				}
			}
		}
	}
}
