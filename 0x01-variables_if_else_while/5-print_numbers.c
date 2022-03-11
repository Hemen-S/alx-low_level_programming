#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digits numbers with base ten
 * Return: Always 0
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(0);
	return (0);
}
