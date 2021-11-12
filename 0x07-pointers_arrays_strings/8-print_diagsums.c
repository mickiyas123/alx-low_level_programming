#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: Address of the square matrix
 * @size: size of the matrix
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i, TotalValues = size * size, sum = 0, sum1 = 0;

	for (i = 0; i < TotalValues; i++)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		if ((i != 0 && i != (TotalValues - 1)) && i % (size - 1) == 0)
			sum1 += a[i];
	}

	printf("%d, %d\n", sum, sum1);
}
