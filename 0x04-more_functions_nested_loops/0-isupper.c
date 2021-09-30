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
	int i, j;

	for (i = 65; i <= z; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	for (j = 97; j <= 122; j++)
	{
		if (c == j)
		{
			return (1);
		}
	}
	return (0);
}
