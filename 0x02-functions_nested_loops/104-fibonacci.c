#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that finds and prints the first 98 Fibonacci
 *              numbers, starting with 1 and 2
 *
 * Return: Always 0 successful
 */
int main(void)
{
	double t0 = 0;
	double t1 = 1;
	double s, i;

	for (i = 1; i <= 98; i++)
	{
		s = t0 + t1;

		if (i == 98)
		{
			printf("%.0f\n", s);
		}
		else
		{
			printf("%.0f, ", s);
		}
		t0 = t1;
		t1 = s;
	}
	return (0);
}
