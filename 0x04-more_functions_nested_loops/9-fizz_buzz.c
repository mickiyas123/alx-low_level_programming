#include "main.h"
#include <stdio.h>

/**
 * Main - Entry Point
 * Description:print "Fizz" for multiple of 3 "Buzz" for 5 "FizzBuzz" for both
 *
 * prints the numbers from 1 to 100, followed by a new line. But for multiples
   of three print Fizz instead of the number and for the multiples of five print
   Buzz. For numbers which are multiples of both three and five print FizzBuzz
 * Return : Always success (0);
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (n == 100)
		{
			printf("Buzz");
		}
		else if (n % 5 == 0 && n % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (n % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ",n);
		}
	}
	printf("\n");
	return (0);
}
