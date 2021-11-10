#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: address of the string to go through
 * @needle: adress of the string to look for the occuernce in @haystack
 *
 * Return: Pointer to the first occernce of @needle in @haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (&haystack[j]);
				break;
			}
		}
	}

	return ('\0');
}
