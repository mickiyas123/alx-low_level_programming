#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character
 * @s: pointer to memoery address of the string
 * @c: The first character occurence in the string
 *
 * Return: position
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');

}
