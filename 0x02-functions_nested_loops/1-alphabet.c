#include <main.h>
#include <stdio.h>

/**
 * main - Entry point 
 *
 * Description: print alphabet in lower case
 * Return: Always 0
 */

void print_alphabet(void);
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}


