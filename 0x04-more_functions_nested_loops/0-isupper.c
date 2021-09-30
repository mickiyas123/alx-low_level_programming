#include "main.h"

/*
 * _isupper - Main Entry
 * Description: function that checks for uppercase character
 * @c: input parameter
 *
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	int i;

	for (j = 65; j <= 90; j++)
	{
		if (c == j)
		{
			return (1);
		}
	}
	return (0);
}
