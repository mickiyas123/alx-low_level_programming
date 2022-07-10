#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13.
 * @str: String to be encoded
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *str)
{
	char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F',
			     'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd',
			     'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p',
			     'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'y', 'z'};
	char keys[] = {'N', 'O', 'P', 'Q', 'R', 'S',
		       'T', 'U', 'V', 'W', 'X', 'Y',
		       'Z', 'A', 'B', 'C', 'D', 'E',
		       'F', 'G', 'H', 'I', 'J', 'K',
		       'L', 'M', 'n', 'o', 'p', 'q',
		       'r', 's', 't', 'u', 'v', 'w',
		       'x', 'y', 'z', 'a', 'b', 'c',
		       'd', 'e', 'f', 'g', 'h', 'i',
		       'j', 'k', 'l', 'm'};
	int i, j, len = sizeof(keys) / sizeof(keys[0]);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = keys[j];
				break;
			}
		}
	}
	return (str);
}
