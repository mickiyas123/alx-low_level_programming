#include "main.h"

/**
 * main - Entry Point
 * Description: prints the alphabet, in lowercase, followed by a new line
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
