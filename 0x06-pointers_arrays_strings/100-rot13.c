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
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char keys[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
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
