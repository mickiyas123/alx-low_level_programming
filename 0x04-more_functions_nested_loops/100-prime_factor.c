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
	int long num = 612852475143;
	int long count;
	int largest;
	int i = 0;

	for (count = 2; num > 1; count++)
	{
		while (num % count == 0)
		{
			if (i == 0)
			{
				largest = count;
				i++;
			}
			else
			{
				if (count > largest)
					largest = count;
			}
			num = num / count;
		}
	}
	printf("%ld\n", count - 1);
	return (0);
}
