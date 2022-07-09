#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int arr[] = {'\t', '\n', ' ', '!', '"', '(', ')', ',', '.',
	';', '?', '{', '}'};

	int len = sizeof(arr) / sizeof(arr[0]);
	int i, j;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (str[i] == arr[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
