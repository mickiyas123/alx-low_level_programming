#include "main.h"

/**
 * _memset - Fills memory with constant byte.
 * @s: the address of the memory to be filled.
 * @b: the value to be filled.
 * @n: the number of total bytes to be filled starting from s.
 *
 * Return: s.
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
