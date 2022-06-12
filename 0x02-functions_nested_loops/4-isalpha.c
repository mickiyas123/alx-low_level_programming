#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character captial and small
 * @c: input parameter
 *
 * Return: 1 if c is a letter, lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
