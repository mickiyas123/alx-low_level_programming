#include "main.h"

/**
 * _islower - Entry point
 * Description: checks for lowercase characte
 * @c: the integere value it recevies
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			_putchar(i + '1');
		}
		else
		{
			_putchar(i + '0');
		}
	}
	return (0);
}
