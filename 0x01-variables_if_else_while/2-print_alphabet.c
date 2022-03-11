#include <stdio.h>
/**
 * main: entry point 
 *
 * Descrption: prints all alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}

