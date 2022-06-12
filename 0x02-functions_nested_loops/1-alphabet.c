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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
