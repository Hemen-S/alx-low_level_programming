#include "main.h"

/**
 * main - Entry point 
 *
 * Description: print alphabet in lower case
 * Return: void
 */

void print_alphabet(void);
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}


