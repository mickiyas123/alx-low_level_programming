#include "main.h"

/**
 * _strpbrk -  function locates the first occurrence in the string
 * @s: Memeory address of string to be looked for
 * @accept: Memory address of string to be checked if any string
 * in @s exist here
 *
 * Return: pointer to the first occurence of string location  or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return ('\0');
}
