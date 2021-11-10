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
	int i = 0, j = 0, len = 0;

	while (needle[len])
	{
		len++;
	}

	while (haystack[i] && needle[j])
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}

	if (j == len)
	{
		return (&haystack[i - j]);
	}
	else
	{
		return ('\0');
	}
}
