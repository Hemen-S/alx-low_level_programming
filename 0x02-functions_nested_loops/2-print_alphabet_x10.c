#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alohabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int round = 0;
	char i = 'a';

	while (round < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
	_putchar('\n');

	round++;
	}	
}
