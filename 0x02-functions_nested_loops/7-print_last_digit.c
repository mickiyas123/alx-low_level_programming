#include "main.h"

/**
 * print_last_digit - Entry Point
 * Description:  function that prints the last digit of a number
 * @n : input parameter
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
