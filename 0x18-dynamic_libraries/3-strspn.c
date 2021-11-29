#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the address of the full string
 * @accept: adress of the substring
 *
 * Return: length of the inital prefix
 */

unsigned int _strspn(char *s, char *accept)
{
        unsigned int n = 0, i = 0;

        while (s[n] && accept[i])
        {
                if (s[n] == accept[i])
                {
                        i = 0;
                        n++;
                }
                else
                {
                        i++;
                }
        }

}
