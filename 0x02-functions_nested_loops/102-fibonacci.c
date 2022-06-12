#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the first 50 Fibonacci numbers,
 *              starting with 1 and 2.
 *
 * Return: Always 0 successful
 */
int main(void)
{
	int t0 = 0;
	int t1 = 1;
	int s, i;

	for (i = 1; i <= 50; i++)
	{
		s = t0 + t1;
		if (i != 50)
		{
			printf("%d, ", s);
		}
		else
		{
			printf("%d\n", s);
		}
		t0 = t1;
		t1 = s;
	}
	return (0);
}
