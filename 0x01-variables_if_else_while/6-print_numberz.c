#include <stdio.h>

/**
 * main - Entry point 
 *
 * Description: to print all single numbebrs with base ten without using char
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
	putchar(10);

	return (0);
}
