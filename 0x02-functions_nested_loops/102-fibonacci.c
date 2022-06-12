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
	long int t0 = 0;
	long int t1 = 1;
	long int s, i;

	for (i = 1; i <= 50; i++)
	{
		s = t0 + t1;
		if (i != 50)
		{
			printf("%ld, ", s);
		}
		else
		{
			printf("%ld\n", s);
		}
		t0 = t1;
		t1 = s;
	}
	return (0);
}
