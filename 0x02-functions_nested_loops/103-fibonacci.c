#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: considering the terms in the Fibonacci sequence whose
 *              values do not exceed 4,000,000, this program finds ,
 *              and prints the sum of the even-valued terms.
 *
 * Return: Always 0 successful
 */
int main(void)
{
	long int t0 = 0;
	long int t1 = 1;
	long int s, i;
	long int sum = 0;

	for (i = 1; i <= 32; i++)
	{
		s = t0 + t1;

		if (s % 2 == 0)
		{
			sum += s;
		}
		t0 = t1;
		t1 = s;
	}
	printf("%ld\n", sum);
	return (0);
}
