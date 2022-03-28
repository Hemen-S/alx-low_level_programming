#include "main.h"
/**
 * memcpy - 
 * @src: char
 * @dest: char
 * @n: unsigned int
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
    unsigned int i;
    for(i = 0; i < n && src[i] = '\0'; i++)
            dest[i] = src[i];   

    return(dest);    
}