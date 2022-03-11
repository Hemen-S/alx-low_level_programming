#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints reverse lowercase alphabets
 * Return: Always 0
 */

int main(void)
{
	int i = 122;
	while (i > 64)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
