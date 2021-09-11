#include <stdio.h>

/**
 * main - Entry Point
 * Description: prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch, n;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = ch + 1; n <= 57; n++)
		{
			putchar(ch);
			putchar(n);

			if (ch != 56 || (ch == 56 && n != 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
