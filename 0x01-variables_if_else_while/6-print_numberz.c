#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers with base ten
 * Return: Always 0
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
