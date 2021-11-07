#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @src: the address of the memory to be copied.
 * @dest: the adess of memeory to be copied to.
 * @n: size of byte of the memory after the first memory address.
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
