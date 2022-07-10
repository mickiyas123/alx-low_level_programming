#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char nums[] = {'4', '3', '0', '7', '1'};
	int len = sizeof(nums) / sizeof(nums[0]), i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (str[i] == letters[j] || str[i] + 32 == letters[j])
			{
				str[i] = nums[j];
			}
		}
	}
	return (str);
}
