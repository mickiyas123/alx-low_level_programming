#include "main.h"

/**
 * print_alphabet  - Entry Point
 * Description: prints the alphabet, in lowercase, followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
