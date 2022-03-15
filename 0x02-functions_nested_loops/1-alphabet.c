#include <main.h>

/**
 * main - Entry point 
 *
 * Description: print alphabet in lower case
 * Return: Always 0
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
	return (0);
}


