#include "main.h"

/**
 * set_string - function that sets the value of
 * a pointer to a char
 * @s: Pointer to a pointer to string literal
 * @to: pointer to a string literal
 */

void set_string(char **s, char *to)
{
	*s = to;
}
