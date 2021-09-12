#include <main.h>

/**
 * print_alphabet_x10 - Entry Point
 * Description: prints 10 times the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0, char ch = 'a';

	while (i < 10)
	{
		while ( ch <= 'z' )
		{
			_putchar(ch);
			ch++;
		}
	_putchar('\n');
	i++;	
	}	

}	
