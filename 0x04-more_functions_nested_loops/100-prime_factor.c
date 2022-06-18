#include <stdio.h>

/**
 * main - Entry point
 * Desription: program that finds and prints the largest
 *             prime factor of the number 612852475143
 *
 * Return: Always success (0)
 */
int main(void)
{
	long int num = 612852475143, fact = 2, maxFact;

	while (num > 1)
	{
		if (num % fact != 0)
		{
			fact++;
		}
		else
		{
			maxFact = num;
			num = num / fact;

			if (num == 1)
			{
				printf("%ld\n", maxFact);
				break;
			}
		}
	}
	return (0);
}
