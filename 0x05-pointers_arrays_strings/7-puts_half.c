#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Return: 0
 */

void puts_half(char *str)
{
	int i, half;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	i++;
	for (half = i / 2; str[half] != '\0'; half++)
	{
		_putchar(str[half]);
	}

	_putchar('\n');

}
