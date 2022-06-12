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

	if (n < 0)
	{
		n = n * -1;
	}
	else
	{
		n = n;
	}

	return (n);
}
