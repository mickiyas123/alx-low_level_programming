#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{/*Variables */
char c;
int i;
long int l;
long long int L;
float f;
/* Print statments */
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(L));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
