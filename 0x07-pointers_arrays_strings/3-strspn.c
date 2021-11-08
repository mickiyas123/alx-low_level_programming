#include "main.h"

/**
 * int _strspn - gets the length of a prefix substring
 * @s: the address of the full string
 * @accept: adress of the substring 
 *
 * Return: length of the inital prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[j])
		{
			return (i + 1);
		}
	}

	return (0);
}
