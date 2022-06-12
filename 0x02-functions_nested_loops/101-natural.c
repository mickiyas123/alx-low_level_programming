#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this function computes and prints the sum of
 *              all the multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: Always 0 successful
 */
int main(void)
{
	int i, result;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			result += i;
		}
		else if (i % 5 == 0)
		{
			result += i;
		}
	}
	printf("%d\n", result);
	return (0);
}
