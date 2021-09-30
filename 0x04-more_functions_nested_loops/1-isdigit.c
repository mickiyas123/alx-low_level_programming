#include "main.h"

/**
 * _isdigit - Main Entry
 * Description: Checks for numeric character
 * @c: the character to be checked
 *
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
