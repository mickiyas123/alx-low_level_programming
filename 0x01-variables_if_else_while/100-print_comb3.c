#include <stdio.h>

/**
 * main - Entry Point
 * Description: prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	for (int i = 48; i < 58; i++)
	{
		for (int j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);

			if (i == 56 && j == 57)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
