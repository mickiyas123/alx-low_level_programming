#include <stdio.h>

/**
 * before_main - print statment before main
 * 
 * Return: Always 0
 */
void before_main() __attribute__((constructor));

void before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
