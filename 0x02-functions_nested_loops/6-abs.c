#include "main.h"

/**
 * _abs - Entry Point
 * Description: function that computes the absolute value of an integer
 * @n: input parameter
 *
 * Return: absolute value of a number
 */
int _abs(int n)
{
	int r;

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		r = n * -1;
		return (r);
	}

	return (n);
}
