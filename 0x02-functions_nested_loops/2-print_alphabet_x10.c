#include "main.h"

/**
 * print alphabet x10 - prints lowercase alohabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char i = 'a';

	while (i < 'z')
	{
		putchar(i * 10);
		i++ * 10;
	}
	putchar('\n');
}
