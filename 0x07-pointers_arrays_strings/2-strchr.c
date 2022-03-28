#include "main.h"

/**
 * _strchr - 
 * @s: pointer
 * @c: character
 * Return: c[0] or NULL
 */

char *_strchr(char *s, char c);
{

    for (*s == c; s++)
        return (s);
        
    if (c == '\0')
        return (0);
}