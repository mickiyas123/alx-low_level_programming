#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 *
 * Return: A pointer to the encoded string.
 */

/**
 * @s: charcter to be rotated
 */

void calc(char *s);


char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		calc(&(str[i]));
	}
	return (str);
}

/**
 * calc - calculate rotation of the string.
 * @s: charcter to be rotated
 */

void calc(char *s)
{
	if ((*s >= 'A' && *s <= 'M') || (*s >= 'a' && *s <= 'm'))
	{
		*s = *s + 13;
	}
	else if ((*s >= 'N' && *s <= 'Z') || (*s >= 'n' && *s <= 'z'))
	{
		*s = *s - 13;
	}
}
