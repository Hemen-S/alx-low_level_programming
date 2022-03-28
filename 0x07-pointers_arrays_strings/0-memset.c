#include "main.h"

/**
 * main - prints buffer in hexa
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: char(s)
 */

char *_memset(char *s, char b, unsigned int n);
{
    unsigned int i;

    for(i=0; i < n; i++)
    {
        s[i] = b;
    }

    return (s);
}