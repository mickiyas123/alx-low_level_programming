#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
        /*my code here*/
	for(int x = 'A'; x <= 'z'; x++)
	{
		x = tlower(x);
		putchar(x);
	}
        return (0);
}
