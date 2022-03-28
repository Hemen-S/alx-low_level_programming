#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: character
 * Return: c[0] or NULL
 */

char *_strchr(char *s, char c);
{
    while (*s)
    {
        if (*s == c)
        {
            return (s);
        }
        s++;
    }
    if (c == '\0')
            return (s);
    return (0);
}